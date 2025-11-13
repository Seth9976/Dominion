// 函数: sub_761310
// 地址: 0x761310
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

enum WAIT_EVENT result = WaitForSingleObject(*(arg1 + 0x5c), 0)

if (result != WAIT_OBJECT_0)
    result = arg1
    WAVEHDR* pwh_1 = result + 0x14
    int32_t* ebx_1 = result + 0xc
    bool cond:0_1
    
    do
        int32_t i = 0
        WAVEHDR* pwh = pwh_1
        
        do
            if ((pwh->dwFlags & 0x10) == 0)
                sub_75b980(*(result + 0x60), *ebx_1, *(result + 0x64))
                result = waveOutWrite(*(arg1 + 0x54), pwh, 0x20)
                
                if (result != WAIT_OBJECT_0)
                    return result
                
                result = arg1
            
            i += 1
            ebx_1 = &ebx_1[1]
            pwh = &pwh[1]
        while (i s< 2)
        
        WaitForSingleObject(*(result + 0x58), 0xffffffff)
        cond:0_1 = WaitForSingleObject(*(arg1 + 0x5c), 0) != WAIT_OBJECT_0
        result = arg1
        pwh_1 = result + 0x14
        ebx_1 = result + 0xc
    while (cond:0_1)

return result
