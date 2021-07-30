/*
  * 【前提条件】
  * ・初期位置；カムラの里にいればどこでも大丈夫
  * ・オプション　オートセーブしない
  * ・アクションスライダー　初期位置　里内移動
  */

#include <NintendoSwitchControlLibrary.h>
int number = 0;

void setup() {
  // Switchがマイコンを認識するまでは信号を受け付けないため、適当な処理をさせておく
  pushButton(Button::B, 1000,5);
  
  changeCameraSettings();
  rajang(10,false);//・・・・・・・・回数  |  true：セーブ　false：セーブしない

  //おっさんに話しかける
  pushHat(Hat::DOWN,50);
  pushButton(Button::A, 500);
  tiltLeftStick(255, 128, 700);//1.5秒　右に行く
  tiltLeftStick(128, 255, 400);//下に行く
  pushButton(Button::A, 700);

  //護石の確認
  pushHat(Hat::DOWN,50,2);
  pushButton(Button::A, 100);

  pushHat(Hat::UP,50);
  pushButton(Button::A, 100);
  
  /*
  //終わったのがわかりやすいようにオトモ広場に移動
  pushHat(Hat::DOWN,50);
  pushHat(Hat::DOWN,50);
  pushButton(Button::A, 3000);
  */
}

void loop() {
}
