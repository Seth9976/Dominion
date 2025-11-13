// 函数: sub_74ce10
// 地址: 0x74ce10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1

if (arg1 != 0 && arg1[5] != 0x63)
    return 

LPARAM ecx = arg1[6]
int32_t eax
eax.b = ecx == 0
arg1[6] = eax
LRESULT _Str1

if (ecx != 0)
    int32_t edx
    _Str1 = sub_74cd80(eax.b, edx, *(data_19e2778 + 0x14), *arg1)
    LRESULT _Str1_1 = _Str1
    
    if (_Str1 != 0xffffffff)
        _Str1 = SendMessageA(*(data_19e2778 + 0x18), 0x18b, 0, 0)
        WPARAM wParam_1 = _Str1 - 1
        
        if (_Str1 - 1 s>= 0)
            WPARAM wParam_3
            
            do
                LRESULT lParam_1 = SendMessageA(*(data_19e2778 + 0x18), 0x199, wParam_1, 0)
                
                if (lParam_1 == 0xffffffff)
                    lParam_1 = 0
                
                _Str1 = *lParam_1
                
                if (_Str1 != 0 && _mbsicmp(_Str1, *arg1) == 0 && *(lParam_1 + 0x14) != 0x63)
                    SendMessageA(*(data_19e2778 + 0x14), 0x181, _Str1_1 + 1, lParam_1)
                
                wParam_3 = wParam_1
                wParam_1 -= 1
            while (wParam_3 - 1 s>= 0)
else
    _Str1 = SendMessageA(*(data_19e2778 + 0x14), 0x18b, ecx, ecx)
    WPARAM wParam = _Str1 - 1
    
    if (_Str1 - 1 s>= 0)
        WPARAM wParam_2
        
        do
            LRESULT edi_1 = SendMessageA(*(data_19e2778 + 0x14), 0x199, wParam, 0)
            
            if (edi_1 != 0xffffffff && edi_1 != 0)
                LRESULT lParam = _mbsicmp(*edi_1, *arg1)
                
                if (lParam == 0 && *(edi_1 + 0x14) != 0x63)
                    SendMessageA(*(data_19e2778 + 0x14), 0x182, wParam, lParam)
            
            wParam_2 = wParam
            wParam -= 1
        while (wParam_2 - 1 s>= 0)
