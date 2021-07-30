void dojo(){
  talkToACat();

  //オトモ道場　選択
  pushHat(Hat::DOWN,50,3);
  pushButton(Button::A, 200,4);

  //アキンドングリ　使用
  pushButton(Button::X, 200);

  //決定　選択
  pushHat(Hat::UP,50);
  pushButton(Button::A, 300);

  //B連打
  pushButton(Button::B, 300,5);
}
