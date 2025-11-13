// 函数: sub_75970e
// 地址: 0x75970e
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

AcquireSRWLockExclusive(&data_cc8a08)

while (true)
    if (*arg1 == 0)
        *arg1 = 0xffffffff
        break
    
    if (*arg1 != 0xffffffff)
        TEB* fsbase
        *(*(fsbase->ThreadLocalStoragePointer + (data_cc8d3c << 2)) + 8) = data_8c4004
        break
    
    __Init_thread_wait_v2()

return ReleaseSRWLockExclusive(&data_cc8a08)
