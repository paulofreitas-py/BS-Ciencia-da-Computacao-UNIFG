import { connectToDatabase } from "../../../util/mongodb";

export default async (req, res) => {
  const { db } = await connectToDatabase();

  const allDecks = await db
    .collection("decks")
    .find({ userId: req.body.id })
    .toArray();

  res.json(allDecks);
  res.end();
};
