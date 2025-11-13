// 函数: sub_62bb70
// 地址: 0x62bb70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 != 0)
    uint32_t eax_1 = zx.d(arg1.w)
    
    if (eax_1 u< data_b809e4)
        void* eax_3 = eax_1 * 0x1c30 + data_b809e0
        
        if (*(eax_3 + 0x1c28) == arg1 && eax_3 != 0)
            int32_t ecx_1 = *(eax_3 + 0x2c)
            
            if (ecx_1 u> 8)
                noreturn sub_62bb30() __tailcall
            
            switch (ecx_1)
                case 0
                    return eax_3 + 0x138
                case 1
                    return eax_3 + 0x180
                case 2
                    noreturn sub_62b970() __tailcall
                case 3
                    noreturn sub_62b9b0() __tailcall
                case 4
                    noreturn sub_62b9f0() __tailcall
                case 5
                    noreturn sub_62ba30() __tailcall
                case 6
                    noreturn sub_62ba70() __tailcall
                case 7
                    noreturn sub_62bab0() __tailcall
                case 8
                    noreturn sub_62baf0() __tailcall

int32_t var_8 = arg1
sub_63b7f0("invalid DomItemData hItem %d")
return 0x19e39b0
