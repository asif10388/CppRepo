fBullCowCount fBullCowgame::SubmitGuess(Fstring Guess)
{

	//increment turn number
	MyCurrentTry++;
	//setup a return variable
	fBullCowCount BullCowCount;
	//loop through the guess
	int32 HiddenWordLength = MyHiddenWord.length();
	for (int32 i = 0; i < HiddenWordLength; i++)
	{


		//compare letters against the hidden word
			//if they match then
				//if they're in the same place then
					//increment Bulls
				//else
					//increment cows
	}
	return BullCowCount;
}
