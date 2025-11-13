// 函数: sub_75a28b
// 地址: 0x75a28b
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

FILETIME systemTimeAsFileTime
__builtin_memset(&systemTimeAsFileTime, 0, 8)
GetSystemTimeAsFileTime(&systemTimeAsFileTime)
uint32_t var_8 = systemTimeAsFileTime.dwHighDateTime ^ systemTimeAsFileTime.dwLowDateTime
uint32_t eax_2 = GetCurrentThreadId()
var_8 ^= eax_2
uint32_t eax_3 = GetCurrentProcessId()
var_8 ^= eax_3
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
int32_t var_14
return var_14 ^ performanceCount ^ var_8 ^ &var_8
