#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void sports(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Sports" && user_input == "watch")
  {
    offset += 25;
  }
  else if (contentID == "Sports" && user_input == "skip")
  {
    offset -= 27;
  }
  else if (contentID == "Sports" && user_input == "like")
  {
    offset += 40; 
  }
  else if (contentID == "Sports" && user_input == "subscribe")
  {
    offset += 86;
  }
  else if (contentID == "Sports" && user_input == "notify")
  {
    offset -= 62;
  }
  else if (contentID == "Sports" && user_input == "all")
  {
    offset += 85;
  }
  else if (contentID == "Sports" && user_input == "unsubscribe")
  {
    offset -= 78;
  }
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

void politics(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Politics" && user_input == "watch")
  {
    max -= 3;
  }
  else if (contentID == "Politics" && user_input == "skip")
  {
    offset -= 67;
  }
  else if (contentID == "Politics" && user_input == "like")
  {
    max -= 7; 
  }
  else if (contentID == "Politics" && user_input == "subscribe")
  {
    offset += 70;
    max -= 10;
  }
  else if (contentID == "Politics" && user_input == "notify")
  {
    offset += 77;
    max -= 10;
  }
  else if (contentID == "Politics" && user_input == "all")
  {
    offset += 75;
  }
  else if (contentID == "Politics" && user_input == "unsubscribe")
  {
    offset -= 60;
    max += 9;
  }
    
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

void finandbiz(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Finance & Business" && user_input == "watch")
  {
    max -= 10;
  }
  else if (contentID == "Finance & Business" && user_input == "skip")
  {
    offset -= 47;
  }
  else if (contentID == "Finance & Business" && user_input == "like")
  {
    max -= 16; 
  }
  else if (contentID == "Finance & Business" && user_input == "subscribe")
  {
    offset += 66;
    max -= 20;
  }
  else if (contentID == "Finance & Business" && user_input == "notify")
  {
    max -= 20;
  }
  else if (contentID == "Finance & Business" && user_input == "all")
  {
    max -= 75;
  }
  else if (contentID == "Finance & Business" && user_input == "unsubscribe")
  {
    offset += 8;
  }
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

void gaming(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Gaming" && user_input == "watch")
  {
    max -= 23;
  }
  else if (contentID == "Gaming" && user_input == "skip")
  {
    offset -= 27;
  }
  else if (contentID == "Gaming" && user_input == "like")
  {
    max -= 26; 
  }
  else if (contentID == "Gaming" && user_input == "subscribe")
  {
    offset += 30;
    max -= 30;
  }
  else if (contentID == "Gaming" && user_input == "notify")
  {
    max -= 29;
  }
  else if (contentID == "Gaming" && user_input == "all")
  {
    offset += 45;
    max -= 30;
  }
    
  else if (contentID == "Gaming" && user_input == "unsubscribe")
  {
    offset -= 40;
    max += 30;
  }
    
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

void music(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Music" && user_input == "watch")
  {
    max -= 13;
  }
  else if (contentID == "Music" && user_input == "skip")
  {
    offset -= 17;
  }
  else if (contentID == "Music" && user_input == "like")
  {
    max -= 26; 
  }
  else if (contentID == "Music" && user_input == "subscribe")
  {
    offset += 35;
    max -= 36;
  }
    
  else if (contentID == "Music" && user_input == "notify")
  {
    max -= 38;
  }
  else if (contentID == "Music" && user_input == "all")
  {
    max -= 40;
  }
  else if (contentID == "Cooking Video" && user_input == "unsubscribe")
  {
    offset = 48;
    max -= 40;
  }
    
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

void movies(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Movies" && user_input == "watch")
  {
    max -= 5;
  }
  else if (contentID == "Movies" && user_input == "skip")
  {
    offset -= 7;
  }
  else if (contentID == "Movies" && user_input == "like")
  {
    max -= 15; 
  }
  else if (contentID == "Movies" && user_input == "subscribe")
  {
    max -= 36;
  }
  else if (contentID == "Movies" && user_input == "notify")
  {
    max -= 46;
  }
  else if (contentID == "Movies" && user_input == "all")
  {
    max -= 50;
    offset += 30;
  }
    
  else if (contentID == "Movies" && user_input == "unsubscribe")
  {
    offset -= 28;
  }
    
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

void comedy(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Comedy" && user_input == "watch")
  {
    max -= 3;
  }
  else if (contentID == "Comedy" && user_input == "skip")
  {
    offset -= 7;
  }
  else if (contentID == "Comedy" && user_input == "like")
  {
    max -= 15; 
  }
  else if (contentID == "Comedy" && user_input == "subscribe")
  {
    max -= 50;
  }
  else if (contentID == "Comedy" && user_input == "notify")
  {
    max -= 46;
  }
  else if (contentID == "Comedy" && user_input == "all")
  {
    max -= 60;
  }
  else if (contentID == "Comedy" && user_input == "unsubscribe")
  {
    offset -= 18;
  }
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

void tech(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Tech" && user_input == "watch")
  {
    offset += 3;
  }  

  else if (contentID == "Tech" && user_input == "skip")
  {
    offset -= 5;
  }

  else if (contentID == "Tech" && user_input == "like")
  {
    offset += 7;
    max -= 25;
  }

  else if (contentID == "Tech" && user_input == "subscribe")
  {
    offset += 19;
    max -= 45;
  }

  else if (contentID == "Tech" && user_input == "notify")
  {
    offset += 20;
    max -= 35;
  }

  else if (contentID == "Tech" && user_input == "all")
  {
    offset = 21;
    max -= 55;
  }

  else if (contentID == "Tech" && user_input == "unsubscribe")
  {
    offset -= 21;
    max += 55;
  }
}

void brainrot(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Brainrot" && user_input == "watch")
  {
    max -= 5;
  }

  else if (contentID == "Brainrot" && user_input == "skip")
  {
    offset += 3;
  }

  else if (contentID == "Brainrot" && user_input == "like")
  {
    offset += 7;
    max -= 7;
  }

  else if (contentID == "Brainrot" && user_input == "subscribe")
  {
    offset += 9;
    max -= 35;
  }

  else if (contentID == "Brainrot" && user_input == "notify")
  {
    max -= 45;
  }

  else if (contentID == "Brainrot" && user_input == "all")
  {
    offset -= 9;
    max -= 85;
  }

  else if (contentID == "Brainrot" && user_input == "unsubscribe")
  {
    offset -= 9;
    max += 45; 
  }
}

void cooking(string user_input, string contentID, int offset, int range, int max, int num)
{
  if (contentID == "Cooking Video" && user_input == "watch")
  {
    max -= 3;
  }
  else if (contentID == "Cooking Video" && user_input == "skip")
  {
    offset -= 7;
  }
  else if (contentID == "Cooking Video" && user_input == "like")
  {
    max -= 6; 
  }
  else if (contentID == "Cooking Video" && user_input == "subscribe")
  {
    max -= 56;
  }
  else if (contentID == "Cooking Video" && user_input == "notify")
  {
    max -= 66;
  }
  else if (contentID == "Cooking Video" && user_input == "all")
  {
    max -= 75;
  }
  else if (contentID == "Cooking Video" && user_input == "unsubscribe")
  {
    offset += 8;
  }
  else 
  {
    max -= 1; // Decrement max for unexpected input
  }
}

int main()
{
  string user_input;
  string contentID;

  int range;
  int offset = 1;
  int max = 101;

  srand(time(nullptr));

  while (true) { // Continuous loop
    range = offset + (rand() % max);
    int num = range;

    if (num >= 1 && num <= 10)
    {
      contentID = "Cooking Video\n";
    }
    else if (num >= 11 && num <= 20)
    {
      contentID = "Brainrot\n";
    }
    else if (num >= 21 && num <= 30)
    {
      contentID = "Tech\n";
    }
    else if (num >= 31 && num <= 40)
    {
      contentID = "Comedy\n";
    }
    else if (num <= 41 && num <= 50)
    {
      contentID = "Movies\n";
    }
    else if (num <= 51 && num <= 60)
    {
      contentID = "Music\n";
    }
    else if (num <= 61 && num <= 70)
    {
      contentID = "Gaming\n";
    }
    else if (num <= 71 && num <= 80)
    {
      contentID = "Finance & Business\n";
    }
    else if (num <= 81 && num <= 90)
    {
      contentID = "Politics\n";
    }
    else if (num <= 91 && num <= 100)
    {
      contentID = "Sports\n";
    }

    cout << contentID;
    cin >> user_input;

    cooking(user_input, contentID, offset, range, max, num);
    brainrot(user_input, contentID, offset, range, max, num);
    tech(user_input, contentID, offset, range, max, num);
    comedy(user_input, contentID, offset, range, max, num);
    movies(user_input, contentID, offset, range, max, num);
    music(user_input, contentID, offset, range, max, num);
    gaming(user_input, contentID, offset, range, max, num);
    finandbiz(user_input, contentID, offset, range, max, num);
    politics(user_input, contentID, offset, range, max, num);
    sports(user_input, contentID, offset, range, max, num);
  }

  return 0;
}