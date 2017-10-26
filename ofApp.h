#pragma once//変数宣言を行うヘッダ

#include "ofMain.h"

class ofApp : public ofBaseApp{
    private:
    ofTrueTypeFont font1, font2; //ASCII文字を表示したいときに使うクラス
    
	public:
    //ofApp.cppで使う変数をここで定義
    typedef struct player{
        int count; //得点
        int cw; //得点（文字列）の長さ
        int plus; //加算ポイント
    }PLAY;
    
    int x, y;
    
        void n_set();
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

    PLAY pc1;
    PLAY pc2;
    //int count1, count2;
    int xs,ys; //スクリーンの幅と高さ
    int ch; //得点（文字列）の高さ
    //int cw1;
    //int plus1;
    char text1[125], text2[125]; //テキストの配列
};
