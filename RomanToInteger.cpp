int romanToInt(string s) {
    char romans[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int integer[7] = {1, 5, 10, 50, 100, 500, 1000};

    int length = s.length();
    int *sI = new int[length];

    for (int i = 0; i < length; i++)
        for (int j = 0; j < 7; j++) 
            if (s[i] == romans[j])
                sI[i] = j;

    int answer = integer[sI[length - 1]];
    for (int i = 0; i < length - 1; i++) {
        if (sI[i]  < sI[i + 1])
            answer -= integer[sI[i]];
        else
            answer += integer[sI[i]];
    }

    return answer;

}
    
int romanToInt(string s) 
{
    unordered_map<char, int> T = { { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
                                   
   int sum = T[s.back()];
   for (int i = s.length() - 2; i >= 0; --i) 
   {
       if (T[s[i]] < T[s[i + 1]])
       {
           sum -= T[s[i]];
       }
       else
       {
           sum += T[s[i]];
       }
   }
   
   return sum;
}
