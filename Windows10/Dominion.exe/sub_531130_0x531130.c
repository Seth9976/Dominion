// 函数: sub_531130
// 地址: 0x531130
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebp
int32_t var_4 = ebp
__chkstk(0x1998)
void* eax
int32_t edx
eax, edx = sub_573400()
void* result_2 = nullptr
void* result = *(eax + 0x5c)
__return_addr = result

if (result s> 0)
    do
        void arg_d00
        result = sub_566320(&arg_d00, edx, 1, &arg_d00)
        void* result_3
        __builtin_memcpy(&result_3, result, 0xc84)
        
        if (arg2 == 0)
            break
        
        result = result_3
        
        if (result == 0)
            break
        
        void* result_1 = result
        int32_t arg_c = 0x3ec
        int32_t arg_10 = 0x3eb
        int32_t arg_14 = 2
        void* eax_2 = sub_573400()
        int32_t arg_18 = 0x7b
        int64_t arg_1c
        __builtin_memset(&arg_1c, 0, 0x1c)
        int32_t eax_3 = *(eax_2 + 0x28)
        int32_t* esi_2 = *(eax_2 + 4)
        int32_t ecx_1 = *(eax_2 + 0x2c)
        int64_t arg_40 = 0
        int128_t arg_48 = arg_18.o
        int32_t arg_3c = ecx_1
        int32_t ecx_2 = *(eax_2 + 0xc)
        int128_t arg_58 = arg1.o
        int32_t arg_4 = *eax_2
        int128_t arg_68 = eax_3.o
        int32_t arg_8 = *(eax_2 + 0x10)
        int32_t eax_6
        
        if (ecx_2 != esi_2[0x673])
            eax_6 = ecx_2
        else
            eax_6 = esi_2[0x674]
        
        int128_t* var_24_1 = &arg_48
        int32_t ecx_4
        ecx_4, edx =
            sub_6236a0(eax_6, &arg_4, esi_2, ecx_2, eax_6, &result_1, &var_4, ecx_2, &arg_c, 3)
        int32_t eax_7 = var_4
        
        if (eax_7 == 2)
            int32_t var_1c_4 = ecx_4
            edx = sub_5624a0(result_1, 0x3ee)
        else if (eax_7 == 0x3eb)
            edx = sub_5695c0(eax_7 - 0x3eb, 0x3ee, result_1, 0xb)
        else
            if (eax_7 != 0x3ec)
                sub_63b870(eax_7 - 0x3ec, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 0xb71, 
                    "TrashDiscardOrReturn")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* result_4 = result_1
            result_1 = result_4
            
            if (result_4 != 0)
                void* eax_11 = sub_573400()
                void* var_1c_2 = nullptr
                void* var_20_1 = nullptr
                *(eax_11 + 0xc)
                int32_t var_24_2 = 0
                int32_t var_28_2 = 0
                void* var_3c_2
                __builtin_memcpy(&var_3c_2, 
                    "\x01\x00\x00\x00\xee\x03\x00\x00\x0b\x00\x00\x00\x07\x00\x00\x00\x00", 0x11)
                *(eax_11 + 4)
                int32_t var_38_2
                int128_t* var_34_2
                int32_t var_30_2
                char var_2c_2
                edx = sub_582eb0(&result_1, var_3c_2, var_38_2, var_34_2, var_30_2, var_2c_2, 
                    var_28_2, var_24_2, var_20_1, var_1c_2)
        
        result = result_2 + 1
        result_2 = result
    while (result s< __return_addr)

return result
