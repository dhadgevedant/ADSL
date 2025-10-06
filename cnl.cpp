#include<iostream>
using namespace std;

int main()
{
    int error;
    int totalFrame;
    int choice;
    
    
    cout<<"Enter the total number of frames :";
    cin>>totalFrame;
    
    cout<<"\n Select the case:\n 1.Go-Back-N\n 2.selective repeat\n Enter your choice:"<<endl;
    cin>>choice;
    
    
    cout<<"\n sending all frame initially\n";
    for(int i=1;i<=totalFrame;i++){
        cout<<" \nframe "<< i <<" sent\n ";
        
    }
    cout<<"Enter the frame number for which error should be detected: ";
    cin>>error;
    if(choice==1){
        cout<<"\n Go-Back-N retransmission\n";
        for(int i=error;i<=totalFrame;i++){
            cout<<" Frame "<< i <<" Sent again\n ";
            
        }
    }
    else if(choice==2){
        cout<<"\n Selective repeat retransmission\n";
        cout<<" Frame "<< error <<" Sent again\n ";
        
    }
    else{
        cout<<"Envalid choice";
        return 0;
    }

    return 0;
}


/*
    OUTPUT

    vedantdhadge@Veds-Mac ADSL % g++ cnl.cpp -o cnl && ./cnl
    Enter the total number of frames :10

    Select the case:
    1.Go-Back-N
    2.selective repeat
    Enter your choice:
    1

    sending all frame initially
    
    frame 1 sent
    
    frame 2 sent
    
    frame 3 sent
    
    frame 4 sent
    
    frame 5 sent
    
    frame 6 sent
    
    frame 7 sent
    
    frame 8 sent
    
    frame 9 sent
    
    frame 10 sent
    Enter the frame number for which error should be detected: 8

    Go-Back-N retransmission
    Frame 8 Sent again
    Frame 9 Sent again
    Frame 10 Sent again
    %                                                                                                                                                                                         
    vedantdhadge@Veds-Mac ADSL % g++ cnl.cpp -o cnl && ./cnl
    Enter the total number of frames :10

    Select the case:
    1.Go-Back-N
    2.selective repeat
    Enter your choice:
    2

    sending all frame initially
    
    frame 1 sent
    
    frame 2 sent
    
    frame 3 sent
    
    frame 4 sent
    
    frame 5 sent
    
    frame 6 sent
    
    frame 7 sent
    
    frame 8 sent
    
    frame 9 sent
    
    frame 10 sent
    Enter the frame number for which error should be detected: 8

    Selective repeat retransmission
    Frame 8 Sent again
 */