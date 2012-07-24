#include "pi_to_pi.h"

void pi_to_pi(vector<float> &angle)
{	
    vector<int> index;
    index = find1(angle);
    vector<int>::iterator iter;
    

    if (!index.empty()){
        for (iter = index.begin(); iter != index.end(); iter++) {
            angle[iter] = angle[iter] % (2*pi);  
        }
    }
    
    for (int i = 0; i< angle.size(); i++) {
        if (angle[i] > pi) {
            angle[i] = angle[i]-2*pi;
        }   
    }

    for (int j=0; j< angle.size(); j++) {
        if(angle[j] < -1*pi){
            angle[j] = angle[j]+2*pi;
        }
    }
}

vector<int> find1(vector<float> &input) {
	vector<int> index;
    for (int i =0; i<input.size(); i++) {
        if ((input[i] > 2*pi) || (input[i] < -2*pi)){
            index.push_back(i);
        }    
    }
	return index; 
}
