/*
1,  10000001
    10111111

2， 129
    191

3， char    1バイト
　　int     4バイト
    float   4バイト
    double  8バイト

4， char*    1バイト
　　int*     4バイト
    float*   4バイト
    double*  8バイト

5， 2です

6， int main()
    {
        int firstNum = 0;
        int secondNum = 0;
        int ans = 0;

        bool isFirstNumOdd = false;
        bool isSecondNumOdd = false;

        printf("数値を2つ入力してください。\n");

        scanf_s("%d", &firstNum);
        scanf_s("%d", &secondNum);

        isFirstNumOdd = firstNum % 2;
        isSecondNumOdd = secondNum % 2;

        if(isFirstNumOdd && isSecondNumOdd)
        {
            ans = firstNum + secondNum;
        }
        else if (!(isFirstNumOdd || isSecondNumOdd))
        {
            ans = firstNum * secondNum;
        }

        printf("ans = %d\n", ans);

        return 0;

    }

7， int main()
    {

        while(true)
        {
            char firstNum, secondNum
            int ans = 0;

            printf("数値を1つ入力してください。\n");
            scanf_s("%d", &firstNum);
            if (firstNum = 'end')
            {
                break;
            }

            printf(" 2番目に入力された値。\n");
            scanf_s("%d", &secondNum);
            bool isFirstNumOdd = false;
            bool isSecondNumOdd = false;

            printf("数値を2つ入力してください。\n");

            scanf_s("%d", &firstNum);
            scanf_s("%d", &secondNum);

            isFirstNumOdd = firstNum % 2;
            isSecondNumOdd = secondNum % 2;

            if(isFirstNumOdd && isSecondNumOdd)
            {
                ans = firstNum + secondNum;
            }
            else if (!(isFirstNumOdd || isSecondNumOdd))
            {
                ans = firstNum * secondNum;
            }

            printf("ans = %d\n", ans);

            return 0;

            }
        }

8,  class Point
  {
  public:
       Point() { Clear(); }
         
      void Clear()
      {
          x = 0;
          y = 0;
          z = 0;
      }

  public:
      int x, y, z;
};
  int main()
   {
      Point point;
      Point nextPoint;

      nextPoint.x = 100;
      nextPoint.y = 30;

      while (1)
      {
          if (point.x < nextPoint.x)
          {
              point.x++;
          }
          else if (point.x > nextPoint.x)
          {
              point.x--;
          }

          if (point.y < nextPoint.y)
          {
              point.y++;
          }
          else if (point.y > nextPoint.y)
          {
              point.y--;
          }
          printf("pointX = %d\n", point.x);
          printf("pointY = %d\n", point.y);

          if (point.x == nextPoint.x &&
              point.y == nextPoint.y)
          {
              break;
          }
      }
  }
*/