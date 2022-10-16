

int numJewelsInStones(char * jewels, char * stones){
    int c=0,i,j;
    for(i=0;i<strlen(jewels);i++)
    {
        for(j=0;j<strlen(stones);j++)
        {
            if(jewels[i]==stones[j])
            {
                c++;
            }
        }
    }
    return c;
}