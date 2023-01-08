#include <iostream>

 

using namespace std;

 

int main(){
    double pos[] = {0,0,0,0,0,0,0,0,0,0,0};
    float maxL = 0;
    float x;
    int i=0;
    while(true){
        cout<<"Input the burner location: ";
        cin>>x;
        if(x<0 or x>100){
            pos[i+1] = 101;
            break;
        }
        else{
        if (x <= pos[i-1] and i >=1){
        cout<<"Next location must be greater than "<<pos[i-1]<<".\n";
        continue;

        }


        else if(x==100){
            pos[i] = x;
            i++;
            break;
        }

        else{
            pos[i] = x;

        }

 

        i++;
        }
    }

 

    if(pos[0]!=0 and 100-pos[i-1]<pos[0]){
        maxL = pos[0];

    }
    else if(pos[1]==101){
        maxL = 0;
        }
    else if(pos[i-1]!=100 and 100-pos[i-1]>pos[0]){
        maxL = 100 - pos[i-1];
    }
    else if(100-pos[i-1]==pos[0] and i!= 1){
        for(int j=0;j<(i-1);j++){
        if ((pos[j+1]-pos[j])/2.00>maxL){
            maxL = (pos[j+1]-pos[j])/2.00;
        }
    }
    }
    else if(i==1){
        maxL = pos[0];
    }


    float time = maxL/10.00;
    cout<<"Burning completes in "<<time<<" sec.";
    return 0;

 

}