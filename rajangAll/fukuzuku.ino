void fukuzuku(){
  //マップ移動
  pushHat(Hat::DOWN,50,2);
  pushButton(Button::A, 3000);

  //ダッシュ
  SwitchControlLibrary().pressButton(Button::R);
  
  //フクズク向かう
  tiltLeftStick(128, 0, 3600);//上
  tiltLeftStick(255, 128, 1500);//右
  tiltLeftStick(128, 0, 4500);//上
  tiltLeftStick(255, 255, 1800);//右下
  tiltLeftStick(0, 128, 4050);//左4050
  tiltLeftStick(128, 255, 600);//下
  
  pushButton(Button::A, 6000);
  SwitchControlLibrary().releaseButton(Button::R);

}
