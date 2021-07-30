void rajang(int x,boolean save){
  for(int i=0;i<x;i++){
    
    // 集会所へ移動:
    pushHat(Hat::UP,50,2);
    pushButton(Button::A, 50);
  
    //ウツシ教官まで移動
    tiltLeftStick(128, 0, 1000);//１秒　上に行く
    tiltLeftStick(255, 128, 2500);//2.5秒　右に行く
    tiltLeftStick(128,0,3300);//3.3秒　上に行く
    tiltLeftStick(255, 128, 300);//0.3秒　右に行く

    // ラージャン指定　出発　武器指定
    pushButton(Button::A, 1700);//ウツシが反応するまで待つ

    // A2回
    pushButton(Button::A, 50,2);
  
    //下4回　ラージャン選択
    pushHat(Hat::DOWN,50,4);
    pushButton(Button::A, 50,2);
    delay(2000);//////遅いかも

    //クエスト出発
    pushButton(Button::ZR, 50);
    pushButton(Button::A, 50);

    //武器選択
    delay(500);
    pushHat(Hat::LEFT,50);
    pushHat(Hat::UP,50);
    pushButton(Button::A, 50,2);
    delay(19000);///////////////////////////////////////////////詰めてる

    //クエスト開始　ターゲット設定
    pushButton(Button::RCLICK, 50);
    
    //ダッシュ
    SwitchControlLibrary().pressButton(Button::R);

    //ヒトタマドリ避けつつ落ちる
    tiltLeftStick(0, 0, 1000);//１秒　左上に行く
    tiltLeftStick(128, 0, 2700);//3秒上に行く
  
    //ラージャンと会合
    SwitchControlLibrary().pressButton(Button::ZL);
    pushButton(Button::A, 100);
    delay(1000);
    pushButton(Button::A, 100);
    SwitchControlLibrary().releaseButton(Button::ZL);
    
    tiltLeftStick(128, 0, 2000);//
    SwitchControlLibrary().releaseButton(Button::R);
    
   

    //ダメージくらいに行く
    for (int i=0;i<23;i++){/////////////////////////////////////
      tiltLeftStick(128, 0, 500);//上
      tiltLeftStick(128, 106, 1000);//真ん中　ちょい前
      tiltLeftStick(128, 170, 200);
      
    }

    //クエスト終了 セーブの有無
    if(save==true){
      pushButton(Button::A, 100,5);
    }else{
      pushButton(Button::B, 100,5);
    }  
    delay(20000);
  }
  
}
