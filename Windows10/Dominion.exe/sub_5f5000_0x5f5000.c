// 函数: sub_5f5000
// 地址: 0x5f5000
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 - 0x1400 u> 0x17)
    sub_63b870(arg1 - 0x1400, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0x7cd5, "HasEntitlementForCategory")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* var_c
void* var_8
uint32_t result

switch (arg1)
    case 0x1400, 0x1401, 0x1402, 0x1403, 0x1404, 0x1405, 0x1406, 0x1407, 0x1408, 0x1409, 0x140a, 
            0x140b, 0x140c, 0x140d, 0x140e, 0x140f
        if (arg1 != 0x1400)
            uint32_t edi_1 = sub_4daf40(&var_8, &var_c)
            int32_t esi_1 = 0
            
            if (edi_1 s> 0)
                do
                    if (sub_4db700(*(var_8 + (esi_1 << 2)), arg1 - 0x13fe).b != 0)
                        goto label_5f5031
                    
                    esi_1 += 1
                while (esi_1 s< edi_1)
            
            result.b = 0
            return result
    case 0x1410
        uint32_t eax_2 = sub_4daf40(&var_8, &var_c)
        int32_t esi_2 = 0
        
        if (eax_2 s> 0)
            void* ebx_2 = var_8
            
            do
                if (sub_4db700(*(ebx_2 + (esi_2 << 2)), 0xb).b != 0)
                    goto label_5f5031
                
                esi_2 += 1
            while (esi_2 s< eax_2)
        
        uint32_t eax_3 = sub_4daf40(&var_8, &var_c)
        int32_t esi_3 = 0
        
        if (eax_3 s> 0)
            void* ebx_3 = var_8
            
            do
                if (sub_4db700(*(ebx_3 + (esi_3 << 2)), 0xc).b != 0)
                    goto label_5f5031
                
                esi_3 += 1
            while (esi_3 s< eax_3)
        
        uint32_t eax_4 = sub_4daf40(&var_8, &var_c)
        int32_t esi_4 = 0
        
        if (eax_4 s> 0)
            void* ebx_4 = var_8
            
            do
                if (sub_4db700(*(ebx_4 + (esi_4 << 2)), 0xf).b != 0)
                    goto label_5f5031
                
                esi_4 += 1
            while (esi_4 s< eax_4)
        
        uint32_t edi_5 = sub_4daf40(&var_8, &var_c)
        int32_t esi_5 = 0
        
        if (edi_5 s<= 0)
            result.b = 0
            return result
        
        void* ebx_5 = var_8
        
        while (true)
            result = sub_4db700(*(ebx_5 + (esi_5 << 2)), 0x11)
            
            if (result.b != 0)
                break
            
            esi_5 += 1
            
            if (esi_5 s>= edi_5)
                return result
    case 0x1411
        uint32_t edi_6 = sub_4daf40(&var_8, &var_c)
        int32_t esi_6 = 0
        
        if (edi_6 s<= 0)
            result.b = 0
            return result
        
        void* ebx_6 = var_8
        
        while (true)
            result = sub_4db700(*(ebx_6 + (esi_6 << 2)), 0xc)
            
            if (result.b != 0)
                break
            
            esi_6 += 1
            
            if (esi_6 s>= edi_6)
                return result
    case 0x1412
        uint32_t edi_7 = sub_4daf40(&var_8, &var_c)
        int32_t esi_7 = 0
        
        if (edi_7 s<= 0)
            result.b = 0
            return result
        
        void* ebx_7 = var_8
        
        while (true)
            result = sub_4db700(*(ebx_7 + (esi_7 << 2)), 0xe)
            
            if (result.b != 0)
                break
            
            esi_7 += 1
            
            if (esi_7 s>= edi_7)
                return result
    case 0x1413
        uint32_t edi_8 = sub_4daf40(&var_8, &var_c)
        int32_t esi_8 = 0
        
        if (edi_8 s<= 0)
            result.b = 0
            return result
        
        void* ebx_8 = var_8
        
        while (true)
            result = sub_4db700(*(ebx_8 + (esi_8 << 2)), 0xf)
            
            if (result.b != 0)
                break
            
            esi_8 += 1
            
            if (esi_8 s>= edi_8)
                return result
    case 0x1414
        uint32_t edi_10 = sub_4daf40(&var_8, &var_c)
        int32_t esi_10 = 0
        
        if (edi_10 s<= 0)
            result.b = 0
            return result
        
        void* ebx_10 = var_8
        
        while (true)
            result = sub_4db700(*(ebx_10 + (esi_10 << 2)), 0x10)
            
            if (result.b != 0)
                break
            
            esi_10 += 1
            
            if (esi_10 s>= edi_10)
                return result
    case 0x1415
        uint32_t edi_9 = sub_4daf40(&var_8, &var_c)
        int32_t esi_9 = 0
        
        if (edi_9 s<= 0)
            result.b = 0
            return result
        
        void* ebx_9 = var_8
        
        while (true)
            result = sub_4db700(*(ebx_9 + (esi_9 << 2)), 0x11)
            
            if (result.b != 0)
                break
            
            esi_9 += 1
            
            if (esi_9 s>= edi_9)
                return result
    case 0x1416, 0x1417
        uint32_t edi_11 = sub_4daf40(&var_8, &var_c)
        int32_t esi_11 = 0
        
        if (edi_11 s<= 0)
            result.b = 0
            return result
        
        void* ebx_11 = var_8
        
        while (true)
            result = sub_4db700(*(ebx_11 + (esi_11 << 2)), 0x12)
            
            if (result.b != 0)
                break
            
            esi_11 += 1
            
            if (esi_11 s>= edi_11)
                return result

label_5f5031:
result.b = 1
return result
