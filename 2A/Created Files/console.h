#define UP_ARROW 226
#define DOWN_ARROW 227
#define LEFT_ARROW 228
#define RIGHT_ARROW 229

#define BACKSPACE 0x100
#define CRTPORT 0x3d4



#include "types.h"



void
earaseCurrentLineOnScreen(void);


void
copyCharsToBeMovedToOldBuf(void);



void
earaseContentOnInputBuf();


void
copyBufferToScreen(char * bufToPrintOnScreen, uint length);


void
copyBufferToInputBuf(char * bufToSaveInInput, uint length);

void
saveCommandInHistory();

int history(char *buffer, int historyId);
