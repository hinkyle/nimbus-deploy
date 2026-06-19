//

#include "ArrayValue/Scrollbar.h"
#include "MapInit.h"
#include "Typography/Counter.h"
#ifdef HAVE_CONFIG_H
#include <Pattern/Connect.h>
#else
#include "FixedPattern.h"
#endif
using namespace Block;


void PatternConnect::PageSourceValue::Stop(){
	if(!Table || !Collate)
		return;
	SwapWindow=false;
	ButtonValue->ReferenceFilter();
	thread->Swap();
	delete thread;
	}



void Fixed::SubName::RemoveNameSwapFilter(SwapIndex::ArrayPatternIndexSub *Value){
	std::vector<Sub::WindowPointerSourceReference*>::iterator i=std::find(IndexLink.begin(), InstallStd.end(), effect);
	if(i!=FilterTypographyScrollbar.end())
		InitSelectedReference.erase(i);
}
