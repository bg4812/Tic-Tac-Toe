class TicTacToe{ 

  private: 

    //the amount of wins of each player 

  int p1wins; 

  int p2wins; 

  public: 

  bool boardOn; 

  bool clear; 

  int turn; 

  bool WinnerDeclared; 

  bool p1win; 

  bool p2win; 

  

  bool Tie; 

  //row and collunm coordaintes for curser 

  int curserR; 

  int curserC; 

  //p1 

  bool C00; 

  bool C01; 

  bool C02; 

  bool C10; 

  bool C11; 

  bool C12; 

  bool C20; 

  bool C21; 

  bool C22; 

  int symbolcount; 

  //p2 

   bool C_00; 

  bool C_01; 

  bool C_02; 

  bool C_10; 

  bool C_11; 

  bool C_12; 

  bool C_20; 

  bool C_21; 

  bool C_22; 

  

   

   

  // constructor will create the board  

  TicTacToe(){ 

     

    symbolcount=0; 

    WinnerDeclared=false; 

    p1win=false; 

    p2win=false; 

     //the amount of wins of each player 

  int p1wins=0; 

  int p2wins=0; 

    boardOn=true; 

    bool clear=false; 

    turn=0; 

    //curser will start in the beginning of the board 

    curserR=1; 

    curserC=1; 

    //p1 

    C00=false; 

 C01=false; 

  C02=false; 

  C10=false; 

   C11=false; 

   C12=false; 

   C20=false; 

   C21=false; 

   C22=false; 

   //p2 

      C_00=false; 

   C_01=false; 

   C_02=false; 

   C_10=false; 

   C_11=false; 

   C_12=false; 

   C_20=false; 

   C_21=false; 

   C_22=false; 

   

     

  } 

   

  void updateP1Wins() 

  { 

     

    p1wins++; 

    

} 

 void updateP2Wins() 

  { 

    p2wins++; 

  

} 

int getp1Wins(){ 

   if(p1wins>10) 

    p1wins=0; 

    else if(p1wins<0) 

    p1wins=0; 

  return p1wins; 

} 

void resetwins() 

{ 

  p1wins=p1wins-6; 

} 

  

int getp2Wins(){ 

   

       if(p2wins>10) 

    p2wins=0; 

  return p2wins; 

} 

  void resetBoard() 

  { 

     symbolcount=0; 

    boardOn=true; 

    turn=0; 

    //curser will start in the beginning of the board 

    curserR=1; 

    curserC=1; 

    //p1 

    C00=false; 

 C01=false; 

  C02=false; 

  C10=false; 

   C11=false; 

   C12=false; 

   C20=false; 

   C21=false; 

   C22=false; 

   //p2 

      C_00=false; 

   C_01=false; 

   C_02=false; 

   C_10=false; 

   C_11=false; 

   C_12=false; 

   C_20=false; 

   C_21=false; 

   C_22=false; 

  } 

    void resetGame() 

  { 

     symbolcount=0; 

    boardOn=true; 

    turn=0; 

    p1win=false; 

    p2win=false; 

    WinnerDeclared=false; 

    //curser will start in the beginning of the board 

    curserR=1; 

    curserC=1; 

    //p1 

    C00=false; 

 C01=false; 

  C02=false; 

  C10=false; 

   C11=false; 

   C12=false; 

   C20=false; 

   C21=false; 

   C22=false; 

   //p2 

      C_00=false; 

   C_01=false; 

   C_02=false; 

   C_10=false; 

   C_11=false; 

   C_12=false; 

   C_20=false; 

   C_21=false; 

   C_22=false; 

  } 

   

  void boardoff() 

  { 

    boardOn=false; 

  } 

  void resetCurser(){ 

     curserR=1; 

    curserC=1; 

  } 

  //add X method 

  bool addX(int row,int col){ 

    if(row==0 and col==0) 

    { 

        

        if(C_00==false and C00==false) 

        { 

        C00=true; 

         symbolcount++; 

         return true; 

      } 

          else 

              return false; 

      } 

    else if(row==0 and col==1) 

    { 

         

        if(C_01==false and C01==false){ 

            C01=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==0 and col==2) 

    { 

      if(C_02==false and C02==false){ 

            C02=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==1 and col==0){ 

        if(C_10==false and C10==false){ 

            C10=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==1 and col==1){ 

        if(C_11==false and C11==false){ 

            C11=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==1 and col==2){ 

        if(C_12==false and C12==false){ 

            C12=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

     else if(row==2 and col==0){ 

        if(C_20==false and C20==false){ 

            C20=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==2 and col==1){ 

        if(C_21==false and C21==false){ 

            C21=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==2 and col==2){ 

        if(C_22==false and C22==false){ 

            C22=true; 

            symbolcount++; 

          return true; 

      } 

          else 

              return false; 

      } 

     

  } 

  //check win method 

  bool P1checkWin(){ 

    if(C00==true and C01==true and C02==true) 

        return true; 

    else if(C10==true and C11==true and C12==true) 

        return true; 

     

    else if(C20==true and C21==true and C22==true) 

        return true; 

     

    else if(C00==true and C10==true and C20==true) 

        return true; 

         

    else if(C01==true and C11==true and C21==true) 

        return true; 

     

    else if(C02==true and C12==true and C22==true) 

        return true; 

         

    else if(C00==true and C11==true and C22==true) 

        return true; 

         

    else if(C02==true and C11==true and C20==true) 

        return true; 

     

    else  

        return false; 

  } 

   

    bool P2checkWin(){ 

    if(C_00==true and C_01==true and C_02==true) 

        return true; 

    else if(C_10==true and C_11==true and C_12==true) 

        return true; 

     

    else if(C_20==true and C_21==true and C_22==true) 

        return true; 

     

    else if(C_00==true and C_10==true and C_20==true) 

        return true; 

         

    else if(C_01==true and C_11==true and C_21==true) 

        return true; 

     

    else if(C_02==true and C_12==true and C_22==true) 

        return true; 

         

    else if(C_00==true and C_11==true and C_22==true) 

        return true; 

         

    else if(C_02==true and C_11==true and C_20==true) 

        return true; 

     

    else  

        return false; 

  } 

  //add O method 

   

  bool addO(int row,int col){ 

    if(row==0 and col==0) 

    { 

      if(C00==false and C_00==false){ 

        symbolcount++; 

        C_00=true; 

        return true; 

      } 

          else 

              return false; 

      } 

           

       

    else if(row==0 and col==1) 

    { 

        if(C01==false and C_01==false){ 

        symbolcount++; 

        C_01=true; 

        return true; 

      } 

          else 

              return false; 

      } 

    else if(row==0 and col==2) 

    { 

      if(C02==false and C_02==false){ 

        symbolcount++; 

        C_02=true; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==1 and col==0){ 

        if(C10==false and C_10==false){ 

        symbolcount++; 

        C_10=true; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==1 and col==1){ 

        if(C11==false and C_11==false){ 

        symbolcount++; 

        C_11=true; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==1 and col==2){ 

        if(C12==false  and C_12==false){ 

        symbolcount++; 

        C_12=true; 

          return true; 

      } 

          else 

              return false; 

      } 

     else if(row==2 and col==0){ 

        if(C20==false  and C_20==false){ 

        symbolcount++; 

        C_20=true; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==2 and col==1){ 

        if(C21==false and C_21==false){ 

        symbolcount++; 

        C_21=true; 

          return true; 

      } 

          else 

              return false; 

      } 

    else if(row==2 and col==2){ 

        if(C22==false and C_22==false){ 

        symbolcount++; 

        C_22=true; 

          return true; 

      } 

          else 

              return false; 

      } 

     

  } 

  //move cruser method 

  void movecurserUp(){ 

    curserR--; 

    if(curserR<0) 

        curserR=2; 

    cout<<"Row"<<curserR<<endl; 

    cout<<"column"<<curserC<<endl; 

  } 

   

   void movecurserR(){ 

    curserC++; 

    if(curserC>2) 

        curserC=0; 

    cout<<"Row"<<curserR<<endl; 

    cout<<"column"<<curserC<<endl; 

     

  } 

   

  void movecurserL(){ 

    curserC--; 

    if(curserC<0) 

        curserC=2; 

    cout<<"Row"<<curserR<<endl; 

    cout<<"column"<<curserC<<endl; 

  } 

     

  void movecurserD(){ 

    curserR++; 

    if(curserR>2) 

        curserR=0; 

    cout<<"Row"<<curserR<<endl; 

    cout<<"column"<<curserC<<endl; 

  } 

   

  //check if board full 

   

  bool boardFull(){ 

    cout<<"count"<<symbolcount<<endl; 

    if(symbolcount==9) 

        return true; 

         

    else 

        false; 

     

  } 

  void changeTurn(){ 

    turn++; 

    if (turn>1) 

        turn=0; 

     

  } 
