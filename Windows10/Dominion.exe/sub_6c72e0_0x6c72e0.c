// 函数: sub_6c72e0
// 地址: 0x6c72e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770580
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_164 = esi
int32_t edi
int32_t var_168 = edi
int32_t __saved_ebp
int32_t var_16c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HDROP hDrop = arg1
HDROP hDrop_1 = hDrop
SetFocus(data_147b084)
int32_t var_170_1 = 0
int32_t var_174 = 0
int32_t var_178 = 0xffffffff
uint32_t (__stdcall* const var_150)(HDROP hDrop, uint32_t iFile, uint8_t* lpszFile, uint32_t cch) =
    DragQueryFileA
uint32_t result = DragQueryFileA(hDrop, 0xffffffff, nullptr, 0)
int32_t* esp_1 = &var_16c
int32_t edi_1 = 0
uint32_t result_1 = result

if (result s> 0)
    BOOL (__stdcall* const var_154_1)(HWND hWnd, uint32_t Msg, WPARAM wParam, LPARAM lParam) =
        PostMessageA
    
    do
        *(esp_1 - 4) = 0x100
        void var_128
        *(esp_1 - 8) = &var_128
        *(esp_1 - 0xc) = edi_1
        *(esp_1 - 0x10) = hDrop
        var_150()
        esp_1 -= 4
        int32_t var_14_1 = 0
        int128_t var_14c = zx.o(0)
        var_14c.d = 0x1c
        int128_t var_13c = zx.o(0)
        result = _mm_bsrli_si128(zx.o(0), 8)
        var_13c:8.d = result
        
        if (result == 0 || result != &var_128)
            void* esi_1 = &var_128
            
            do
                result.b = *esi_1
                esi_1 += 1
            while (result.b != 0)
            
            void var_127
            int32_t esi_2 = esi_1 - &var_127
            
            if (esi_1 != &var_127)
                *(esp_1 - 4) = 0
                sub_63d5e0(result, esi_2, &var_13c:8)
                *(esp_1 - 4) = esi_2 + 1
                *(esp_1 - 8) = &var_128
                *(esp_1 - 0xc) = var_13c:8.d
                result = memcpy()
            else
                if (data_cf65bc != esi_2)
                    result = var_13c:8.d
                    
                    if (result != 0 && *result != 0)
                        result = sub_63d4e0(&var_13c:8)
                        int32_t temp2_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp2_1 == 1)
                            result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                var_13c:8.d = &data_801800
        
        void* edx_5 = data_147abe8
        
        if (edx_5 != 0)
            void* esi_3 = data_147ac28
            
            if (var_14c.d - 0xd u<= 0xb)
                switch (var_14c.d + &jump_table_6c77a8[2]:3)
                    case &lookup_table_6c77c0
                        *(esi_3 + 0x28) = 2
                    case &lookup_table_6c77c0[1]
                        *(esi_3 + 0x28) = 3
                    case &lookup_table_6c77c0[5]
                        *(esi_3 + 0x28) = 4
                    case &lookup_table_6c77c0[7], &lookup_table_6c77c0[9]
                        *(esi_3 + 0x28) = 6
                    case &lookup_table_6c77c0[0xb]
                        *(esi_3 + 0x28) = 7
            
            int32_t ecx_3
            
            if (*(edx_5 + 0x22) != 0 && var_14c.d == 1)
                ecx_3 = var_14c:4.d
            
            if (*(edx_5 + 0x22) != 0 && var_14c.d == 1
                    && (ecx_3 == 0x74 || ecx_3 == 0x79 || ecx_3 == 0x7a))
                result = var_14c:8.d
                void* esi_4 = edx_5
                char var_129_1 = 1
                
                if ((result.b & 7) != 0)
                    var_129_1 = 0
                
                if (ecx_3 != 0xd)
                    if (ecx_3 == 0x71)
                        if (var_129_1 == 0 || *(data_cf65b8 + 0x28) == 0)
                            goto label_6c76f1
                        
                        int32_t edx_4 = *(esi_4 + 0x1c)
                        result = edx_4 & 0xfffffdff
                        uint32_t result_2 = edx_4 | 0x200
                        
                        if (((edx_4 u>> 9).b & 1) != 0)
                            result_2 = result
                        
                        *(esi_4 + 0x1c) = result_2
                    else if (ecx_3 != 0x73)
                        if (ecx_3 != 0x43)
                            goto label_6c75e3
                        
                        if ((result.b & 0xa) == 0)
                            goto label_6c76f1
                        
                        void* eax_11 = data_cf65b8
                        
                        if ((result.b & 1) == 0)
                            if (*(eax_11 + 0x28) == 0)
                                goto label_6c76f1
                            
                            int32_t* ecx_8 = data_147d1b0
                            
                            if (ecx_8 == 0)
                                goto label_6c76f1
                            
                            int32_t eax_12 = *ecx_8
                            *(esp_1 - 4) = 1
                            (*(eax_12 + 0x24))()
                            data_147d2b4 = data_800248
                            goto label_6c75d1
                        
                        if (*(eax_11 + 0x28) == 0)
                            goto label_6c76f1
                        
                        sub_6cce80()
                    label_6c75d1:
                        edx_5 = data_147abe8
                        ecx_3 = var_14c:4.d
                        result = var_14c:8.d
                    label_6c75e3:
                        
                        if (ecx_3 == 0x44)
                            if ((result.b & 2) == 0 || (result.b & 4) == 0)
                                goto label_6c76f1
                            
                            result.b = *(edx_5 + 0x20) == 0
                            *(edx_5 + 0x20) = result.b
                        else if (ecx_3 == 0xbe)
                            if ((result.b & 2) == 0 || (result.b & 4) == 0)
                                goto label_6c76f1
                            
                            result = data_147b06c
                            *result += 1
                        else if (ecx_3 != 0xbc)
                            if (ecx_3 == 0x73)
                                goto label_6c7686
                            
                            bool cond:2_1
                            
                            if (ecx_3 != 0x72)
                                if (ecx_3 != 0x46)
                                    goto label_6c76f1
                                
                                cond:2_1 = (result.b & 0xa) == 0
                                goto label_6c76bf
                            
                            cond:2_1 = var_129_1 == 0
                        label_6c76bf:
                            
                            if (cond:2_1 || *(edx_5 + 0x20) == 0)
                                goto label_6c76f1
                            
                            int32_t edx_7 = *(esi_4 + 0x1c)
                            result = edx_7 & 0xffffffdf
                            uint32_t result_4 = edx_7 | 0x20
                            
                            if (((edx_7 u>> 5).b & 1) != 0)
                                result_4 = result
                            
                            *(esi_4 + 0x1c) = result_4
                        else
                            if ((result.b & 2) == 0 || (result.b & 4) == 0)
                                goto label_6c76f1
                            
                            if ((result.b & 1) == 0)
                                uint32_t* ecx_9 = data_147b06c
                                uint32_t temp3_1 = *ecx_9
                                *ecx_9 -= 1
                                result = *ecx_9
                                
                                if (temp3_1 - 1 s>= 0)
                                    if (result s> 0x2710)
                                        result = 0x2710
                                    
                                    *ecx_9 = result
                                else
                                    result = 0
                                    *ecx_9 = 0
                            else
                                result = data_147b06c
                                *result = 0
                    else if (result != 4)
                    label_6c7686:
                        
                        if (var_129_1 == 0 || *(edx_5 + 0x20) == 0)
                            goto label_6c76f1
                        
                        int32_t edx_6 = *(esi_4 + 0x1c)
                        result = edx_6 & 0xffffffbf
                        uint32_t result_3 = edx_6 | 0x40
                        
                        if (((edx_6 u>> 6).b & 1) != 0)
                            result_3 = result
                        
                        *(esi_4 + 0x1c) = result_3
                    else
                        *(esp_1 - 4) = 0
                        *(esp_1 - 8) = 0
                        *(esp_1 - 0xc) = 0x10
                        *(esp_1 - 0x10) = data_147b084
                        result = var_154_1()
                else if (result != 4)
                label_6c76f1:
                    result = sub_6cbe10(&var_14c)
                    
                    if (result.b == 0)
                        int32_t* ecx_15 = data_cf65b8
                        *(esp_1 - 4) = &var_14c
                        result = (*(*ecx_15 + 0x28))()
                        
                        if (result.b == 0)
                            result = sub_6939d0(&data_1777480, &var_14c)
                else
                    void* ecx_4 = data_cf65b8
                    
                    if (*(ecx_4 + 0x25) != 0)
                        goto label_6c76f1
                    
                    result.b = *(ecx_4 + 0x22) == 0
                    *(ecx_4 + 0x22) = result.b
                    result = (*(*data_147b070 + 0xb4))()
            else
                *(esp_1 - 4) = &var_14c
                result = sub_69e9c0(esi_3 + 0x10)
        
        int32_t var_14_2 = 1
        
        if (data_cf65bc != 0)
            result = var_13c:8.d
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&var_13c:8)
                int32_t temp1_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp1_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        hDrop = hDrop_1
        edi_1 += 1
        int32_t var_14_3 = 0xffffffff
    while (edi_1 s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
CookieCheckFunction(result)
return result
