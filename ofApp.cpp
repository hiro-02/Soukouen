#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::n_set(){ //各プレイヤーに関する情報を初期化（雛形）
    pc1.count = 0;
    pc1.cw = 0;
    pc1.plus = 0;
    
    pc2.count = 0;
    pc2.cw = 0;
    pc2.plus = 0;
    
    font1.loadFont("Tahoma Bold.ttf", 54); //Tahoma Boldフォント72ptで文字を書く（ttfファイルを読み込むことで定義。MacintoshHDのフォントからbin/data/にコピー）
    font2.loadFont("Tahoma Bold.ttf", 54); //Tahoma Boldフォント72ptで文字を書く（ttfファイルを読み込むことで定義。MacintoshHDのフォントからbin/data/にコピー）
}

//--------------------------------------------------------------
void ofApp::setup(){ //アプリケーションが開始した際に一度だけ実行されます、主にofApp.hで宣言されたオブジェクトや変数を初期化といった用途に用いられます。
    
    //プレイヤーに関する情報を初期化
    n_set();
    
    //スクリーンサイズを取得
    xs = ofGetWidth(); //現在のスクリーンの幅を取得(full-screenで1280)
    ys = ofGetHeight(); //現在のスクリーンの幅を取得(full-screenで800)
    
    //plus1 = 0;
    //count1 = 0;
    ch = font1.stringHeight("1"); //テキストの高さを調べる（不変）
}

//--------------------------------------------------------------
void ofApp::update(){ //アプリケーションが終了するまで無限ループ。draw()の次に実行。アプリケーションの状態を変更する際に用いられます。何らかの演算をする際には他のオブジェクトに対してupdateする必要があります、例えば動画の再生や、コンピュータビジョンや解析などあらゆる操作をするような際に当てはまります。
    if(pc1.plus != 0)
    {
        pc1.count += pc1.plus; //得点加算
        pc1.plus = 0; //加算し終えたので、加算ポイントはゼロになる。
    }
    sprintf(text1, "%d",pc1.count); //countというint型のデータをtextという配列に格納する
    sprintf(text2, "%d",pc2.count); //countというint型のデータをtextという配列に格納する
    pc1.cw = font1.stringWidth(text1); //テキストの幅を調べる
    pc2.cw = font2.stringWidth(text2); //テキストの幅を調べる
}

//--------------------------------------------------------------
void ofApp::draw(){ //アプリケーションが終了するまで無限ループ。update()の次に実行。画面を描写するときに使う。
    ofSetColor(240, 0, 0);
    font1.drawString(ofToString(ch), 0,90);//ofRandom(0, xs-pc1.cw), 60); //数字を文字列へ変換して、(50,80)のところが文字列の左下になるように表示
    //ofRandom(0, x-cw), ofRandom(cw, y) -> スクリーン内にテキストが必ず収まるようにする
    //ofDrawCircle(x, 40, 120); //(x, 40)の位置に半径120の円を描く
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){ //キーボードが押されたとき。keyに格納されるのは、押したキーのASCIIコード。
    if(key == 's' || key == 'S') //もし「s」が押されたら（通常得点）
        pc1.plus = 10;//plus1 = 10;
    else if(key == 'd' || key == 'D') //もし「d」が押されたら（急所という名のボーナス得点）
        pc1.plus = 20;//plus1 = 20;
    else if(key == 'k' || key == 'K') //もし「k」が押されたら（通常得点）
        pc2.plus = 10;//plus2 = 10;
    else if(key == 'l' || key == 'L') //もし「l」が押されたら（急所という名のボーナス得点）
        pc2.plus = 20;//plus2 = 20;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ //押していたキーを離したとき

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}