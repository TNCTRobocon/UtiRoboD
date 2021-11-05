
int state=0;
void setup() {
  // put your setup code here, to run once:
// 通信用設定(Serial)
}

void loop() {
  
//  通信処理
//  ロボット付属のボタン処理
  if(state==0){
//    停止処理
  }else if (state==1){
//    ライントレースで駆動
  }else if (state==2){
//    段差超え
  }else if (state==3){
//    ボール確保
  }
}

void drive_motor(duty,port){
// モータ処理 duty:1~0 のfloat。パワーの指定。 port:制御するモータの指定
}

void drive_under(rad,speed_max){
//  4輪処理 モータ処理を利用する。角度指定で動作させる。(足回りの型によって計算式が異なる)
}


void input_lt(){
//  ライントレースセンサ処理
//return どのセンサが反応したかを返す。
}
