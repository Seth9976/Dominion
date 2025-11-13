// 函数: sub_759c78
// 地址: 0x759c78
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* _ExceptionPtr = *(arg1 - 0x14)
uint32_t _ExceptionNum = **_ExceptionPtr
*(arg1 - 0x20) = _ExceptionNum
return _seh_filter_exe(_ExceptionNum, _ExceptionPtr)
