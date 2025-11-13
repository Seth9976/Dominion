// 函数: _Z17ControllersUpdateI9HitResultEvPFT_RK10ControllerEPF20ControllerCursorTypeS4_RKS1_RbEPFvS4_S9_9ClickTypeEf
// 地址: 0x9afcb0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0 = ControllersUpdateTime(arg4)
Controllers()
int32_t var_50 = ControllersRange::begin()
int32_t var_58 = ControllersRange::end()

while ((ControllersIt::operator!=(&var_50) & 1) != 0)
    Controller* x0_7 = ControllersIt::operator*()
    arg1()
    void var_98
    ControllerUpdateClickState(x0_7, ControllersButtons(), x0, &var_98)
    char var_9c = 0
    int32_t x0_11 = arg2(x0_7, &var_98, &var_9c)
    
    if (zx.d(var_9c) == 0)
        void* var_a8 = nullptr
        
        if ((ControllerClickedAction(x0_7, 7, &var_a8) & 1) != 0)
            arg3(x0_7, var_a8, 7)
        else
            var_a8 = nullptr
            
            if ((ControllerClickedAction(x0_7, 8, &var_a8) & 1) != 0)
                arg3(x0_7, var_a8, 8)
            else
                var_a8 = nullptr
                
                if ((ControllerClickedAction(x0_7, 0, &var_a8) & 1) != 0)
                    arg3(x0_7, var_a8, 0)
                else
                    var_a8 = nullptr
                    
                    if ((ControllerClickedAction(x0_7, 1, &var_a8) & 1) != 0)
                        arg3(x0_7, var_a8, 1)
                    else
                        var_a8 = nullptr
                        
                        if ((ControllerClickedAction(x0_7, 3, &var_a8) & 1) != 0)
                            arg3(x0_7, var_a8, 3)
                        else
                            var_a8 = nullptr
                            
                            if ((ControllerClickedAction(x0_7, 4, &var_a8) & 1) != 0)
                                arg3(x0_7, var_a8, 4)
                            else
                                var_a8 = nullptr
                                
                                if ((ControllerClickedAction(x0_7, 5, &var_a8) & 1) != 0)
                                    arg3(x0_7, var_a8, 5)
                                else
                                    var_a8 = nullptr
                                    
                                    if ((ControllerClickedAction(x0_7, 6, &var_a8) & 1) != 0)
                                        arg3(x0_7, var_a8, 6)
                                    else
                                        var_a8 = nullptr
                                        
                                        if ((ControllerClickedAction(x0_7, 2, &var_a8) & 1) != 0)
                                            arg3(x0_7, var_a8, 2)
                                        else
                                            var_a8 = nullptr
                                            
                                            if ((ControllerClickedAction(x0_7, 9, &var_a8) & 1)
                                                    != 0)
                                                arg3(x0_7, var_a8, 9)
    
    ControllerUpdateFinal(x0_7, zx.q(x0_11))
    ControllersIt::operator++()

return ControllersUpdateAfter()
