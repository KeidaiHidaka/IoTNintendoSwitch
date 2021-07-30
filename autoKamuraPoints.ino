#include <NintendoSwitchControlLibrary.h>

/*
  * 【前提条件】
  * 
  * ・オプション　オートセーブしない
  * ・アクションスライダー　里　クエスト　ともに　里内移動
  * ・オトモアイルー2体
  * 
  */

void setup() {
  // Switchがマイコンを認識するまでは信号を受け付けないため、適当な処理をさせておく
  pushButton(Button::B, 1000,5);
}

void loop() {
  departure();
  kamuraPoint();
}

void departure(){
  //集会所　移動
  pushHat(Hat::UP,100,2);
  pushButton(Button::A, 300);

  //みのと
  tiltLeftStick(0, 128, 2500);//左
  tiltLeftStick(128, 0, 1200);//0.7秒　上に行く
  tiltLeftStick(0, 128, 800);//左

  pushButton(Button::A, 1200);//話しかけた

  //溶岩洞　探索　選択
  pushButton(Button::A, 100);
  pushHat(Hat::UP,100);

  pushButton(Button::A, 100,2);

  pushHat(Hat::UP,100);
  pushButton(Button::A, 100,3);

  delay(1500);

  //出発
  pushButton(Button::ZR, 100);
  pushButton(Button::A, 100);
  delay(25000);

}

void kamuraPoint(){
  
  //サブキャンプ移動
  pushHat(Hat::UP,100);
  pushButton(Button::A, 100);
  pushHat(Hat::DOWN,100);
  pushButton(Button::A, 100,2);

  delay(10000);

  //犬に乗らんほうがいい
  //holdButton(Button::A, 1500);

  //ダッシュ
  SwitchControlLibrary().pressButton(Button::R);
  
  //1つ目
  tiltLeftStick(128, 255, 2000);//下
  delay(500);
  pushButton(Button::A, 3000);

  //2つ目
  tiltLeftStick(0, 128, 2800);//左
  tiltLeftStick(128, 0, 2500);//上
  delay(500);
  tiltLeftStick(0, 128, 800);//左
  delay(500);
  pushButton(Button::A, 3000);

  //3つ目
  tiltLeftStick(128, 255, 14000);//下
  tiltLeftStick(0, 128, 2000);//左

  tiltLeftStick(128, 255, 5000);//下
  tiltLeftStick(255, 128, 3300);//右
  pushButton(Button::A, 3000);

  
  SwitchControlLibrary().releaseButton(Button::R);
  
  //4つ目
  //サブキャンプ移動
  pushHat(Hat::UP,100);
  pushButton(Button::A, 100);
  pushHat(Hat::UP,100);
  pushButton(Button::A, 100,2);
  
  tiltLeftStick(255, 128, 15000);//右
  tiltLeftStick(128, 0, 8000);//上
  tiltLeftStick(255, 128, 2000);//右
  tiltLeftStick(200, 0, 1900);//右上
  pushButton(Button::A, 3000);
  
  
  //クエストクリア
  pushButton(Button::PLUS, 100);
  pushHat(Hat::RIGHT,100);
  pushHat(Hat::DOWN,100,4);
  pushButton(Button::A, 100);
  pushHat(Hat::LEFT,100);
  pushButton(Button::A, 100);
  
  delay(18000);
  pushButton(Button::A, 100,15);

  delay(20000);

  
}
