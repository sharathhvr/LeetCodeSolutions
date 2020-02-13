void clearBuffer(char* buffer);
int lengthOfLongestSubstring(char * s)
{
    int l=0;
    char* tempS=s;
    int count=1;
    char buffer[strlen(s)];
    clearBuffer(buffer);
    int BufferLen=0;
    int flag=0;
    for(int i=0;i<strlen(s);i++)
    {
        tempS=s+i;
        buffer[l]=*(tempS);
        printf("%c\n",*(tempS));
     //   for(int j=0;j<strlen(tempS+1);j++)
      //  {
            int j=0;

                while(j<strlen(tempS+1))
                {
                  for(int k=0;k<strlen(buffer);k++)
                  {
                      if(*(tempS+1+j) == buffer[k])
                      {
                          flag=1;
                          break;
                      }
                      else
                      {
                          flag=0;
                      }

                  }
                    if(flag != 1)
                    {
                        l++;
                        buffer[l]=*(tempS+1+j);
                        j++;
                        count++;
                    }
                    else
                    {
                        break;
                    }
                }

        //}
        if(BufferLen < count)//strlen(buffer)
        {
            BufferLen=count;//strlen(buffer);
            clearBuffer(buffer);
            l=0;
            count=1;
        }
        else
        {
            clearBuffer(buffer);
            l=0;
            count=1;
        }
    }

return BufferLen;
}

void clearBuffer(char* buffer)
{

    for(int i=0; i< sizeof(buffer);i++)
    {
        buffer[i]=NULL;
    }
}
