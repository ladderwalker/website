//Make it so we don't need to include any other C files in our build.
#define CNFG_IMPLEMENTATION

#include "rawdraw_sf.h"

void HandleKey( int keycode, int bDown ) { }
void HandleButton( int x, int y, int button, int bDown ) { }
void HandleMotion( int x, int y, int mask ) { }
void HandleDestroy() { }
int main()
{
	CNFGSetup( "PunchMeIn", 1024, 768 );
	while(1)
	{
		CNFGBGColor = 0x0d0504ff; //Dark Black-Red Background

		short w, h;
		CNFGClearFrame();
		CNFGHandleInput();
		CNFGGetDimensions( &w, &h );\
		printf("width is %f\n", w);



		//Change color to white.
		CNFGColor( 0xffffffff );

		CNFGPenX = 1; CNFGPenY = 1;
		CNFGDrawText( "Hello, World", 2 );
		//Draw a white pixel at 3,0 30


		//Dark Red Color Select
		CNFGColor( 0x800000FF );

		//Draw 200x200 box starting at 100,50
		CNFGTackRectangle( 412, 284, 612, 484 );


		CNFGSwapBuffers();
	}
}
