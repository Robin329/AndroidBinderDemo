#include "IMyService.h"

int main() {
    sp<IServiceManager> sm = defaultServiceManager();                   //��ȡservice manager����
    sp<IBinder> binder = sm->getService(String16("service.myservice")); //��ȡ��Ϊ"service.myservice"��binder�ӿ�
    sp<IMyService> cs = interface_cast<IMyService>(binder); //��biner����ת��Ϊǿ�������͵�IMyService
    cs->sayHello();                                         //����binder���õ���Զ��sayHello()����
    return 0;
}
