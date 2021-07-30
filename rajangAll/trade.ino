void trade(boolean tradeTechnique,boolean akinDonguri){
  talkToACat();

  //交易船　選択
  pushHat(Hat::DOWN,50,2);
  pushButton(Button::A, 300,2);
  
  //受け取り　選択
  pushHat(Hat::DOWN,50,2);
  pushButton(Button::A, 300);

  //すべて受け取る
  pushHat(Hat::UP,50);
  pushButton(Button::A, 300,2);

  if(tradeTechnique==true){//・・・・・・・・・・・・・・・・・・・交渉術かけていない状態からスタート
    pushHat(Hat::UP,50);
    pushButton(Button::A, 300);

    //オトモ選択＆交渉依頼選択  ・・・・・・・・・・・・・・・・・・・ここのダウンの数で好みの交渉術を設定可
    pushButton(Button::A, 50);
    pushHat(Hat::DOWN,50,4);
    pushButton(Button::A, 50);

    //下の二匹にも同様の交渉術
    for(int i=0;i<2;i++){
      pushHat(Hat::DOWN,50);
      pushButton(Button::A, 50,2);  
    }
    if(akinDonguri==true){
      //アキンドングリ使用
      pushButton(Button::X, 50);
    }
    
    //決定
    pushHat(Hat::DOWN,50);
    pushButton(Button::A, 50);
    pushHat(Hat::LEFT,50);//・・・・・・・・・・・・・・・・・・・900pts必要
    pushButton(Button::A, 50);
  }
  //B連打
  pushButton(Button::B, 300,5);
}
