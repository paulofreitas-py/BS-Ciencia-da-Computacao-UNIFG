/**
 * @author Andrews
 */


// VARIABLES

var queue = []              // fila de espera
var count = 0               // Contador para definir IDs
var bathRoom = {            // Objeto Banheiro
    capacity: 3,
    qntdPersonsInner: 0,
    lastGenre: null,
    boxes: [
        { busy: false, personUsing: null },
        { busy: false, personUsing: null },
        { busy: false, personUsing: null },
    ]
}

//HTML Functions

/**
 * Atualiza, adiciona e remove da fila verificando o array queue
 */
function makeQueueHTML() {
    document.getElementById('queue-div').innerHTML = ''
    for (let i = 0; i < queue.length; i++) {
        document.getElementById('queue-div').innerHTML += queue[i].genre ? `<div class="element man">${queue[i].id}</div>` : `<div class="element woman">${queue[i].id}</div>`
    }
}
/**
 * Adiciona um indivíduo em um box 
 * @param {*} position 
 * @param {*} id 
 * @param {*} genre 
 */
function addPeopleBoxHTML(position, id, genre) {
    console.log(`Adicionando no box-${position}`)
    document.getElementById(`box-${position}`).innerHTML += genre ? `<div class="element man">${id}</div>` : `<div class="element woman">${id}</div>`

}
/**
 * remove os indivíduo do box
 * @param {*} id 
 */
function removePeopleBoxHTML(id) {
    document.getElementById(`box-${id}`).innerHTML = ''
}

// Logical Functions

/**
 * Méotod responsável por criar um modelo de pessoa, e direcionar no fluxo
 * @param {*} type 
 */
function addPeople(type) {
    let newPeople = { id: count, genre: type }
    start(newPeople)
    count++
}

/**
 * Método responsável pelas verificações iniciais de disponibilidade, alocação e acesso
 * verifica se o banheiro está lotado, se os requisitos do indivíduo atende o acesso e 
 * também aloca na fila de espera
 * @param {*} person 
 * @param {*} wasQueue 
 * @param {*} positionQueue 
 */
function start(person, wasQueue = false, positionQueue) {
    // verificando se há capacidade no banheiro
    if (bathRoom.qntdPersonsInner < bathRoom.capacity) {
        console.log('Existe vaga!!')
        // verificando o último gênero que entrou, ou se não há mais ninguém lá

        if (bathRoom.lastGenre === person.genre || bathRoom.lastGenre === null) {
            console.log('Ok! Pronto pra entrar')
            if (wasQueue) {
                queue.splice(positionQueue, 1)
                makeQueueHTML()
            }
            enter(person)
        } else {

            if (!wasQueue) {
                queue.push(person)
                makeQueueHTML()
            }
        }
    } else {
        console.log('Banheiro Lotado')
        if (!wasQueue) {
            queue.push(person)
            makeQueueHTML()
        }
    }
}
/**
 * Método que adiciona o inidíduo no box disponível, fazendo verificações pra saber qual deles
 * está livre
 * @param {*} person 
 */
function enter(person) {
    for (let i = 0; i < bathRoom.capacity; i++) {
        if (bathRoom.boxes[i].busy) {
            bathRoom.lastGenre = person.genre
            break
        } else {
            bathRoom.lastGenre = null
        }
    }

    let positonUseBox

    // verificando box disponível
    for (let i = 0; i < bathRoom.capacity; i++) {
        if (!bathRoom.boxes[i].busy) {
            console.log(`posição ${i} disponível`)
            positonUseBox = i
            bathRoom.boxes[i].busy = true
            bathRoom.boxes[i].personUsing = person
            bathRoom.lastGenre = person.genre
            bathRoom.qntdPersonsInner++
            addPeopleBoxHTML(positonUseBox, person.id, person.genre)
            break
        }
    }

    checkQueue()

    setTimeout(() => {
        leave(positonUseBox, person)
    }, randomTime());
}
/**
 * Método para retirar o indivíduo do banheiro 
 * @param {*} positonUseBox 
 * @param {*} person 
 */
function leave(positonUseBox, person) {
    bathRoom.boxes[positonUseBox].busy = false
    bathRoom.boxes[positonUseBox].personUsing = null
    bathRoom.qntdPersonsInner--
    removePeopleBoxHTML(positonUseBox)

    for (let i = 0; i < bathRoom.capacity; i++) {
        if (bathRoom.boxes[i].busy) {
            bathRoom.lastGenre = person.genre
            break
        } else {
            bathRoom.lastGenre = null
        }
    }
    checkQueue()
}
/**
 * Todas as vezes que há entradas ou saídas no banheiro esse método é chamado.
 * Ele tem função de checar a fila para alocar quando houver vagas
 */
function checkQueue() {
    for (let i = 0; i < queue.length; i++) {
        start(queue[i], true, i)
    }
}
/**
 * Método que retorna um tempo em segundos entre um intervalo, é usado para definir o tempo
 * de cada indivíduo nos banheiros
 */
function randomTime() { return (Math.floor(Math.random() * (15000 - 5000 + 1)) + 5000) }
