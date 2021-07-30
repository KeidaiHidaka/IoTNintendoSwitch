void onnmitsu(boolean akinDonguri2){
  
  talkToACat();

  //オトモ隠密隊　選択
  pushHat(Hat::DOWN,50);
  pushButton(Button::A, 200,2);
  
  //アイテム受け取り　選択
  pushHat(Hat::DOWN,50);
  pushButton(Button::A, 300,2);

  //アイテムすべて受け取る
  pushHat(Hat::UP,50);
  pushButton(Button::A, 300);

  //オトモ隠密隊　選択
  pushButton(Button::A, 200);

  if(akinDonguri2==true){
    pushButton(Button::X, 300);//アキンドングリ  
  }
  

  //調査先選択　上位溶岩洞　一番上
  pushButton(Button::A, 300); 
  pushHat(Hat::UP,50);
  pushButton(Button::A, 300,2); 

  //オトモ選択 手動変更順　上から4匹
  pushButton(Button::A, 200,8);
  
  pushButton(Button::B, 300,5);
}
