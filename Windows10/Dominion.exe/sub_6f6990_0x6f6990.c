// 函数: sub_6f6990
// 地址: 0x6f6990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__chkstk(0x104c)
__security_cookie

if (arg2 == 0xf)
    int32_t __saved_ebp
    sub_6f1800(BeginPaint(arg1, &__saved_ebp))
    EndPaint(arg1, &__saved_ebp)
else if (arg2 != 0x4e)
    if (arg2 != 0x111)
        LRESULT result = DefWindowProcA(arg1, arg2, arg3, arg4)
        CookieCheckFunction(result)
        return result
    
    if (arg3 u>> 0x10 == 1 && arg3.w == 0xab)
        HWND hWnd = GetDlgItem(arg1, 0xab)
        LRESULT ebx_1 = SendMessageA(hWnd, 0x190, 0, 0)
        
        if (ebx_1 s> 0)
            if (ebx_1 s> 0x400)
                ebx_1 = 0x400
            
            void lParam
            SendMessageA(hWnd, 0x191, 0x400, &lParam)
            
            if (data_1512420 == 0)
                if (ebx_1 s> 0)
                    __builtin_memcpy(&data_147df94, &lParam, ebx_1 << 2)
                
                data_147ef94 = ebx_1
                sub_73e3e0()
        else if (data_1512420 == 0)
            data_147ef94 = 0
            sub_73e3e0()
        
        sub_6f7240()
        SetFocus(data_147b084)
else if (arg3 == 0xac && *(arg4 + 8) == 0x42a)
    sub_6f5580(*arg4, arg4)

CookieCheckFunction(0)
return 0
