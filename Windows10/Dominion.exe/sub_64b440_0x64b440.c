// 函数: sub_64b440
// 地址: 0x64b440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t performanceCount
int32_t var_8
TEB* fsbase

if (data_1a98f90 s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a98f90)
    
    if (data_1a98f90 == 0xffffffff)
        QueryPerformanceCounter(&performanceCount)
        data_1a98f98 = performanceCount
        data_1a98f9c = var_8
        __Init_thread_footer(&data_1a98f90)

QueryPerformanceCounter(&performanceCount)
int32_t performanceCount_1 = performanceCount
return sub_63c000(performanceCount_1 - data_1a98f98, 
    sbb.d(var_8, data_1a98f9c, performanceCount_1 u< data_1a98f98))
