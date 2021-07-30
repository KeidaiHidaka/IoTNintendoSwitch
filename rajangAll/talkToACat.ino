void talkToACat(){
  //集会所　2階　移動
  pushHat(Hat::UP,50,3);
  pushButton(Button::A, 300);

  //ネコに話しかける手前
  tiltLeftStick(128, 0, 700);//0.7秒　上に行く
  tiltLeftStick(255, 128, 300);//0.3秒　右に行く

  delay(500);
  //話しかける
  pushButton(Button::A, 2000);
}
