// 函数: ___scrt_acquire_startup_lock
// 地址: 0x759453
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (___asan_report_present() != 0)
    TEB* fsbase
    void* StackBase = fsbase->NtTib.Self->NtTib.StackBase
    
    while (true)
        result = 0
        
        if (0 == data_cc89e4)
            data_cc89e4 = StackBase
        else
            result = data_cc89e4
        
        if (result == 0)
            break
        
        if (StackBase == result)
            result.b = 1
            return result

result.b = 0
return result
