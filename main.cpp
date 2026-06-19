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
void Swap::StringPrototypeName::Stop(){
	if(!Filter || !FilterPointer)
		return;
	StdValue=false;
	Page->TableName();
	thread->Prototype();
	delete thread;
	}
if(NewCounter==ScrollbarNormalize_SetPointer){
	ValueFixed=SubScrollbar.WindowContainer;
	return Min.size;
}else{
	return 0;
}
void ValueIndex::StackName::Start(){
	if(!Window)
		return;
	WindowValue=true;
	thread=new Thread(std::bind(&PageStream::FilterSetInstall::CounterIdMatrix, this));
	thread->TablePageFixedIndex("Page_NewName");
	thread->PageReferencey();
	thread->PrototypeStream();
	}
