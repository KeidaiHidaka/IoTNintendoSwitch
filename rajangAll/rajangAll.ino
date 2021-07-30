 /*
  * 【前提条件】
  * ・初期位置；カムラの里にいればどこでも大丈夫
  * ・オプション　SAVEDATA オートセーブしない
  * ・アクションスライダー　初期位置　里内移動
  * 
  * ・交易船　オトモ選択済み　
  * ・交渉術モードにするなら、、、交渉術未使用状態　Lv35以上(もしいなければコード書き換える)
  * 
  * ・隠密　出発済み　受け取ってなければおけ
  * ・オトモ道場　オトモ選択済み
  * ・隠密　アイルー　手動変更　上から4匹
  */

#include <NintendoSwitchControlLibrary.h>
int number = 0;

void setup() {
  // Switchがマイコンを認識するまでは信号を受け付けないため、適当な処理をさせておく
  pushButton(Button::B, 500,5);
  changeCameraSettings();
  
}

void loop() {
  rajang(1,true);//・・・・・・・・・・・・回数  |  true：セーブ　false：セーブしない
  number += 1;//・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・・
  
  if(number%5==0){//５の倍数の時　やること
    fukuzuku();
    onnmitsu(true);//true：アキンドングリ使用  　false：アキンドングリ使わない
    dojo();
  }
  if(number%3==0){//３の倍数の時　やること　アキンドングリ使うなら６に変える
    trade(true,false);//。。。。。。。。。。。。。。。true：交渉術使用　false：交渉術なし | true：アキンドングリ使用  　false：アキンドングリ使わない
  }
  if(number==30){
    number=1;
  }
}
