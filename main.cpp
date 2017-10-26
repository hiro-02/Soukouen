#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){

	ofSetupOpenGL(1024,768, OF_FULLSCREEN);			// プロジェクトの表示の仕方を決める
    //1024(width)×768(high)のウィンドウを生成(OF_WINDOW),"OF_WINDOW -> OF_FULLSCREEN"の場合は1024×768の大きさの領域がスクリーン左上から表示される（スクリーンの余白はグレーになる） 768->687(dockを消したら751)

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp()); //ofAppを実行

}
