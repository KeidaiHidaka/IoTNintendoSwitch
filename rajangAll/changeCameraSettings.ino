void changeCameraSettings(){
  //オプションを選択
  pushButton(Button::PLUS, 50);
  pushHat(Hat::LEFT,50);
  pushButton(Button::A, 50);

  //CAMERAを選択
  pushHat(Hat::DOWN,50,2);
  pushButton(Button::A, 50);

  //カメラの向きを選択
  pushHat(Hat::UP,50,8);
  pushButton(Button::A, 50);
  
  //ターゲットカメラからロックオンカメラに変更
  pushHat(Hat::RIGHT,50,3);
  pushHat(Hat::LEFT,50);
  pushButton(Button::A, 50);

  //戻る
  pushButton(Button::B, 50,5);
  
}
