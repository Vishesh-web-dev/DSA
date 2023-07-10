for(int i = 0; i<n ; i++){
        int idk = abs(a[i]); //positive array value
        //ab us array value ka use krke usi index mai jaenge aur visit kr denge 
        // by negating its value their
        //if already visited
        if(a[idk] < 0){
            return idk;
        }
        a[idk] = -a[idk];
    }