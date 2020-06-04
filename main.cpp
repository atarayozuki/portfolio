#include<math.h>
#include<time.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<iostream>
void ftoc(char ch[],float f);
int main()
{
     char ch1m[11]={0},ch1v[11]={0},ch2m[11]={0},ch2v[11]={0},ch3m[11]={0},ch3v[11]={0},ch4m[11]={0},ch4v[11]={0},ch5m[11]={0},ch5v[11]={0},ch6m[11]={0},ch6v[11]={0};
     float a[501]={0},b[501]={0},f[501]={0},g[501]={0},p[200002]={0},q[200002]={0},r1[501]={0},s1[501]={0},r2[501]={0},s2[501]={0},r3[501]={0},s3[501]={0},r4[501]={0},s4[501]={0},x;
     int c[501]={0},h[501]={0},t1[501]={0},t2[501]={0},t3[501]={0},t4[501]={0},o1[501]={0},o2[501]={0},o3[501]={0},o4[501]={0},o5[501]={0},o6[501]={0},d[12]={18,353,18,18,18,688,18,353,518,353,18,353},d1[4]={536,303,1000,303},d2[4]={536,253,1000,253},d3[4]={536,203,1000,203},d4[4]={536,153,1000,153},d5[4]={536,103,1000,103},d6[4]={536,53,1000,53},e[12]={668,353,1000,353,536,353,668,353,668,18,668,353};
     srand(time(NULL));
     for(int i=1;i<200002;i++)
     {
          x=50*(i-100001);
          x=x/1000000;
          p[i]=exp(-x*x/2)/sqrt(2*M_PI);
          q[i]=p[i]+q[i-1];
     }
     for(int j=1;j<200002;j++)
     {
          q[j]=q[j]/20000;
     }
     for(int k=0;k<500;k++)
     {
          a[k]=((rand()-16384)%16384)+16384;
          a[k]=a[k]/32768;
          for(int l=0;l<200002;l++)
          {
               if(q[l]<a[k]&&a[k]<q[l+1])
               {
                    a[k]=l-100000;
                    a[k]=a[k]/20000;
                    c[k]=l-100000;
                    c[k]=c[k]/1000;
               }
          }
          b[k]=a[k]*a[k];
     }
     for(int m=0;m<500;m++)
     {
          a[500]=a[500]+a[m];
          b[500]=b[500]+b[m];
     }
     a[500]=a[500]/500;
     b[500]=b[500]/500-a[500]*a[500];
     ftoc(ch1m,a[500]);
     ftoc(ch1v,b[500]);
     for(int n=0;n<500;n++)
     {
          if(a[n]<0)
          {
               printf("%f ",a[n]);
          }
          if(a[n]>=0)
          {
               printf(" %f ",a[n]);
          }
     }
     printf("\n");
     printf("第1題：normal random variable V1\n");
     printf("mean\n");
     if(a[500]<0)
     {
          printf("%f\n",a[500]);
     }
     if(a[500]>=0)
     {
          printf(" %f\n",a[500]);
     }
     printf("variance\n");
     printf(" %f\n",b[500]);
     
     
     
     for(int i=0;i<500;i++)
     {
          h[i]=(rand()-16384)%16384;
          f[i]=h[i];
          f[i]=f[i]/2364.682365;
          h[i]=h[i]/118;
          g[i]=f[i]*f[i];
     }
     for(int j=0;j<500;j++)
     {
          f[500]=f[500]+f[j];
          g[500]=g[500]+g[j];
     }
     f[500]=f[500]/500;
     g[500]=g[500]/500-f[500]*f[500];
     ftoc(ch2m,f[500]);
     ftoc(ch2v,g[500]);
     delay(3000);
     printf("\n\n\n\n");
     for(int k=0;k<500;k++)
     {
          if(f[k]<0)
          {
               printf("%f ",f[k]);
          }
          if(f[k]>=0)
          {
               printf(" %f ",f[k]);
          }
     }
     printf("\n");
     printf("第2題：uniform random variable V2\n");
     printf("mean\n");
     if(f[500]<0)
     {
          printf("%f\n",f[500]);
     }
     if(f[500]>=0)
     {
          printf(" %f\n",f[500]);
     }
     printf("variance\n");
     printf("%f\n",g[500]);
     
     
     
     for(int i=0;i<500;i++)
     {
          r1[i]=a[i]+10;
          s1[i]=r1[i]*r1[i];
          t1[i]=c[i]+200;
     }
     for(int j=0;j<500;j++)
     {
          r1[500]=r1[500]+r1[j];
          s1[500]=s1[500]+s1[j];
     }
     r1[500]=r1[500]/500;
     s1[500]=s1[500]/500-r1[500]*r1[500];
     ftoc(ch3m,r1[500]);
     ftoc(ch3v,s1[500]);
     delay(3000);
     printf("\n\n\n\n");
     for(int k=0;k<500;k++)
     {
          if(r1[k]<10)
          {
               printf(" %f ",r1[k]);
          }
          if(r1[k]>=10)
          {
               printf("%f ",r1[k]);
          }
     }
     printf("\n");
     printf("第3題(1)(2)小題：Z1=V1+10\n");
     printf("mean\n");
     if(r1[500]<10)
     {
          printf(" %f\n",r1[500]);
     }
     if(r1[500]>=10)
     {
          printf("%f\n",r1[500]);
     }
     printf("variance\n");
     printf(" %f\n",s1[500]);
     
     
     
     for(int i=0;i<500;i++)
     {
          r2[i]=f[i]+10;
          s2[i]=r2[i]*r2[i];
          t2[i]=h[i]+200;
     }
     for(int j=0;j<500;j++)
     {
          r2[500]=r2[500]+r2[j];
          s2[500]=s2[500]+s2[j];
     }
     r2[500]=r2[500]/500;
     s2[500]=s2[500]/500-r2[500]*r2[500];
     ftoc(ch4m,r2[500]);
     ftoc(ch4v,s2[500]);
     delay(3000);
     printf("\n\n\n\n");
     for(int k=0;k<500;k++)
     {
          if(r2[k]<10)
          {
               printf(" %f ",r2[k]);
          }
          if(r2[k]>=10)
          {
               printf("%f ",r2[k]);
          }
     }
     printf("\n");
     printf("第3題(1)(2)小題：Z2=V2+10\n");
     printf("mean\n");
     if(r2[500]<10)
     {
          printf(" %f\n",r2[500]);
     }
     if(r2[500]>=10)
     {
          printf("%f\n",r2[500]);
     }
     printf("variance\n");
     printf("%f\n",s2[500]);
     
     
     
     for(int i=0;i<500;i++)
     {
          r3[i]=16*r1[i]/17+r2[i]/17;
          s3[i]=r3[i]*r3[i];
          t3[i]=16*t1[i]/17+t2[i]/17;
     }
     for(int j=0;j<500;j++)
     {
          r3[500]=r3[500]+r3[j];
          s3[500]=s3[500]+s3[j];
     }
     r3[500]=r3[500]/500;
     s3[500]=s3[500]/500-r3[500]*r3[500];
     ftoc(ch5m,r3[500]);
     ftoc(ch5v,s3[500]);
     delay(3000);
     printf("\n\n\n\n");
     for(int k=0;k<500;k++)
     {
          if(r3[k]<10)
          {
               printf(" %f ",r3[k]);
          }
          if(r3[k]>=10)
          {
               printf("%f ",r3[k]);
          }
     }
     printf("\n");
     printf("第3題(3)(4)小題：(16*Z1+Z2)/17\n");
     printf("mean\n");
     if(r3[500]<10)
     {
          printf(" %f\n",r3[500]);
     }
     if(r3[500]>=10)
     {
          printf("%f\n",r3[500]);
     }
     printf("variance\n");
     printf(" %f\n",s3[500]);
     
     
     
     for(int i=0;i<500;i++)
     {
          r4[i]=r1[i]/2+r2[i]/2;
          s4[i]=r4[i]*r4[i];
          t4[i]=t1[i]/2+t2[i]/2;
     }
     for(int j=0;j<500;j++)
     {
          r4[500]=r4[500]+r4[j];
          s4[500]=s4[500]+s4[j];
     }
     r4[500]=r4[500]/500;
     s4[500]=s4[500]/500-r4[500]*r4[500];
     ftoc(ch6m,r4[500]);
     ftoc(ch6v,s4[500]);
     delay(3000);
     printf("\n\n\n\n");
     for(int k=0;k<500;k++)
     {
          if(r4[k]<10)
          {
               printf(" %f ",r4[k]);
          }
          if(r4[k]>=10)
          {
               printf("%f ",r4[k]);
          }
     }
     printf("\n");
     printf("第3題(5)(6)小題：(Z1+Z2)/2\n");
     printf("mean\n");
     if(r4[500]<10)
     {
          printf(" %f\n",r4[500]);
     }
     if(r4[500]>=10)
     {
          printf("%f\n",r4[500]);
     }
     printf("variance\n");
     printf(" %f\n",s4[500]);
     
     
     
     initwindow(1018,706,"hw2");
     cleardevice();
     drawpoly(6,d);
     drawpoly(2,d1);
     drawpoly(2,d2);
     drawpoly(2,d3);
     drawpoly(2,d4);
     drawpoly(2,d5);
     drawpoly(2,d6);
     drawpoly(6,e);
     outtextxy(0,0,"第1題：normal random variable V1");
     outtextxy(0,18,"值");
     outtextxy(0,46," 15");
     outtextxy(0,146," 10");
     outtextxy(0,246,"  5");
     outtextxy(0,346,"  0");
     outtextxy(0,446,"- 5");
     outtextxy(0,546,"-10");
     outtextxy(0,646,"-15");
     outtextxy(500,354,"序");
     outtextxy(500,337,"500");
     outtextxy(669,18,"Number of values");
     outtextxy(650,296,"  5");
     outtextxy(650,246," 10");
     outtextxy(650,196," 15");
     outtextxy(650,146," 20");
     outtextxy(650,96," 25");
     outtextxy(650,46," 30");
     outtextxy(982,354,"值");
     outtextxy(957,354," 15");
     outtextxy(857,354," 10");
     outtextxy(757,354,"  5");
     outtextxy(657,354,"  0");
     outtextxy(557,354,"- 5");
     outtextxy(536,372,"mean:");
     outtextxy(607,372,ch1m);
     outtextxy(536,390,"variance:");
     outtextxy(607,390,ch1v);
     outtextxy(536,688,"請按任意鍵繼續...");
     for(int i=0;i<500;i++)
     {
          circle(19+i,353-c[i],1);
          o1[c[i]+150]++;
     }
     for(int j=0;j<501;j++)
     {
          setfillstyle(1,2);
          bar(518+j,353-10*o1[j],519+j,353);
     }
     getch();
     
     
     
     cleardevice();
     drawpoly(6,d);
     drawpoly(2,d1);
     drawpoly(2,d2);
     drawpoly(2,d3);
     drawpoly(2,d4);
     drawpoly(2,d5);
     drawpoly(2,d6);
     drawpoly(6,e);
     outtextxy(0,0,"第2題：uniform random variable V2");
     outtextxy(0,18,"值");
     outtextxy(0,46," 15");
     outtextxy(0,146," 10");
     outtextxy(0,246,"  5");
     outtextxy(0,346,"  0");
     outtextxy(0,446,"- 5");
     outtextxy(0,546,"-10");
     outtextxy(0,646,"-15");
     outtextxy(500,354,"序");
     outtextxy(500,337,"500");
     outtextxy(669,18,"Number of values");
     outtextxy(650,296,"  5");
     outtextxy(650,246," 10");
     outtextxy(650,196," 15");
     outtextxy(650,146," 20");
     outtextxy(650,96," 25");
     outtextxy(650,46," 30");
     outtextxy(982,354,"值");
     outtextxy(957,354," 15");
     outtextxy(857,354," 10");
     outtextxy(757,354,"  5");
     outtextxy(657,354,"  0");
     outtextxy(557,354,"- 5");
     outtextxy(536,372,"mean:");
     outtextxy(607,372,ch2m);
     outtextxy(536,390,"variance:");
     outtextxy(607,390,ch2v);
     outtextxy(536,688,"請按任意鍵繼續...");
     for(int i=0;i<500;i++)
     {
          circle(19+i,353-h[i],1);
          o2[h[i]+150]++;
     }
     for(int j=0;j<501;j++)
     {
          setfillstyle(1,2);
          bar(518+j,353-10*o2[j],519+j,353);
     }
     getch();
     
     
     
     cleardevice();
     drawpoly(6,d);
     drawpoly(2,d1);
     drawpoly(2,d2);
     drawpoly(2,d3);
     drawpoly(2,d4);
     drawpoly(2,d5);
     drawpoly(2,d6);
     drawpoly(6,e);
     outtextxy(0,0,"第3題(1)(2)小題：Z1=V1+10");
     outtextxy(0,18,"值");
     outtextxy(0,46," 15");
     outtextxy(0,146," 10");
     outtextxy(0,246,"  5");
     outtextxy(0,346,"  0");
     outtextxy(0,446,"- 5");
     outtextxy(0,546,"-10");
     outtextxy(0,646,"-15");
     outtextxy(500,354,"序");
     outtextxy(500,337,"500");
     outtextxy(669,18,"Number of values");
     outtextxy(650,296,"  5");
     outtextxy(650,246," 10");
     outtextxy(650,196," 15");
     outtextxy(650,146," 20");
     outtextxy(650,96," 25");
     outtextxy(650,46," 30");
     outtextxy(982,354,"值");
     outtextxy(957,354," 15");
     outtextxy(857,354," 10");
     outtextxy(757,354,"  5");
     outtextxy(657,354,"  0");
     outtextxy(557,354,"- 5");
     outtextxy(536,372,"mean:");
     outtextxy(607,372,ch3m);
     outtextxy(536,390,"variance:");
     outtextxy(607,390,ch3v);
     outtextxy(536,688,"請按任意鍵繼續...");
     for(int i=0;i<500;i++)
     {
          circle(19+i,353-t1[i],1);
          o3[t1[i]+150]++;
     }
     for(int j=0;j<501;j++)
     {
          setfillstyle(1,2);
          bar(518+j,353-10*o3[j],519+j,353);
     }
     getch();
     
     
     
     cleardevice();
     drawpoly(6,d);
     drawpoly(2,d1);
     drawpoly(2,d2);
     drawpoly(2,d3);
     drawpoly(2,d4);
     drawpoly(2,d5);
     drawpoly(2,d6);
     drawpoly(6,e);
     outtextxy(0,0,"第3題(1)(2)小題：Z2=V2+10");
     outtextxy(0,18,"值");
     outtextxy(0,46," 15");
     outtextxy(0,146," 10");
     outtextxy(0,246,"  5");
     outtextxy(0,346,"  0");
     outtextxy(0,446,"- 5");
     outtextxy(0,546,"-10");
     outtextxy(0,646,"-15");
     outtextxy(500,354,"序");
     outtextxy(500,337,"500");
     outtextxy(669,18,"Number of values");
     outtextxy(650,296,"  5");
     outtextxy(650,246," 10");
     outtextxy(650,196," 15");
     outtextxy(650,146," 20");
     outtextxy(650,96," 25");
     outtextxy(650,46," 30");
     outtextxy(982,354,"值");
     outtextxy(957,354," 15");
     outtextxy(857,354," 10");
     outtextxy(757,354,"  5");
     outtextxy(657,354,"  0");
     outtextxy(557,354,"- 5");
     outtextxy(536,372,"mean:");
     outtextxy(607,372,ch4m);
     outtextxy(536,390,"variance:");
     outtextxy(607,390,ch4v);
     outtextxy(536,688,"請按任意鍵繼續...");
     for(int i=0;i<500;i++)
     {
          circle(19+i,353-t2[i],1);
          o4[t2[i]+150]++;
     }
     for(int j=0;j<501;j++)
     {
          setfillstyle(1,2);
          bar(518+j,353-10*o4[j],519+j,353);
     }
     getch();
     
     
     
     cleardevice();
     drawpoly(6,d);
     drawpoly(2,d1);
     drawpoly(2,d2);
     drawpoly(2,d3);
     drawpoly(2,d4);
     drawpoly(2,d5);
     drawpoly(2,d6);
     drawpoly(6,e);
     outtextxy(0,0,"第3題(3)(4)小題：(16*Z1+Z2)/17");
     outtextxy(0,18,"值");
     outtextxy(0,46," 15");
     outtextxy(0,146," 10");
     outtextxy(0,246,"  5");
     outtextxy(0,346,"  0");
     outtextxy(0,446,"- 5");
     outtextxy(0,546,"-10");
     outtextxy(0,646,"-15");
     outtextxy(500,354,"序");
     outtextxy(500,337,"500");
     outtextxy(669,18,"Number of values");
     outtextxy(650,296,"  5");
     outtextxy(650,246," 10");
     outtextxy(650,196," 15");
     outtextxy(650,146," 20");
     outtextxy(650,96," 25");
     outtextxy(650,46," 30");
     outtextxy(982,354,"值");
     outtextxy(957,354," 15");
     outtextxy(857,354," 10");
     outtextxy(757,354,"  5");
     outtextxy(657,354,"  0");
     outtextxy(557,354,"- 5");
     outtextxy(536,372,"mean:");
     outtextxy(607,372,ch5m);
     outtextxy(536,390,"variance:");
     outtextxy(607,390,ch5v);
     outtextxy(536,688,"請按任意鍵繼續...");
     for(int i=0;i<500;i++)
     {
          circle(19+i,353-t3[i],1);
          o5[t3[i]+150]++;
     }
     for(int j=0;j<501;j++)
     {
          setfillstyle(1,2);
          bar(518+j,353-10*o5[j],519+j,353);
     }
     getch();
     
     
     
     cleardevice();
     drawpoly(6,d);
     drawpoly(2,d1);
     drawpoly(2,d2);
     drawpoly(2,d3);
     drawpoly(2,d4);
     drawpoly(2,d5);
     drawpoly(2,d6);
     drawpoly(6,e);
     outtextxy(0,0,"第3題(5)(6)小題：(Z1+Z2)/2");
     outtextxy(0,18,"值");
     outtextxy(0,46," 15");
     outtextxy(0,146," 10");
     outtextxy(0,246,"  5");
     outtextxy(0,346,"  0");
     outtextxy(0,446,"- 5");
     outtextxy(0,546,"-10");
     outtextxy(0,646,"-15");
     outtextxy(500,354,"序");
     outtextxy(500,337,"500");
     outtextxy(669,18,"Number of values");
     outtextxy(650,296,"  5");
     outtextxy(650,246," 10");
     outtextxy(650,196," 15");
     outtextxy(650,146," 20");
     outtextxy(650,96," 25");
     outtextxy(650,46," 30");
     outtextxy(982,354,"值");
     outtextxy(957,354," 15");
     outtextxy(857,354," 10");
     outtextxy(757,354,"  5");
     outtextxy(657,354,"  0");
     outtextxy(557,354,"- 5");
     outtextxy(536,372,"mean:");
     outtextxy(607,372,ch6m);
     outtextxy(536,390,"variance:");
     outtextxy(607,390,ch6v);
     outtextxy(536,688,"請按任意鍵繼續...");
     for(int i=0;i<500;i++)
     {
          circle(19+i,353-t4[i],1);
          o6[t4[i]+150]++;
     }
     for(int j=0;j<501;j++)
     {
          setfillstyle(1,2);
          bar(518+j,353-10*o6[j],519+j,353);
     }
     getch();
     
     
     
     //while(!kbhit());
     closegraph();
     return 0;
}



void ftoc(char ch[],float f)
{
     float g;
     if(f<0)
     {
          ch[0]='-';
          g=f*-1;
     }
     if(f>=0)
     {
          ch[0]=' ';
          g=f;
     }
     int i=g*1000000;
     int j[8];
     j[7]=i%10;
     i=i/10;
     j[6]=i%10;
     i=i/10;
     j[5]=i%10;
     i=i/10;
     j[4]=i%10;
     i=i/10;
     j[3]=i%10;
     i=i/10;
     j[2]=i%10;
     i=i/10;
     j[1]=i%10;
     i=i/10;
     j[0]=i%10;
     ch[1]=j[0]+48;
     if(j[0]==0)
     {
          ch[1]=' ';
     }
     ch[2]=j[1]+48;
     ch[3]=46;
     ch[4]=j[2]+48;
     ch[5]=j[3]+48;
     ch[6]=j[4]+48;
     ch[7]=j[5]+48;
     ch[8]=j[6]+48;
     ch[9]=j[7]+48;
}
