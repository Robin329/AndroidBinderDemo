#include "IMyService.h"

int main() {
    sp<IServiceManager> sm = defaultServiceManager(); //��ȡservice manager����
    sm->addService(String16("service.myservice"),
                   new BnMyService());        //ע����Ϊ"service.myservice"�ķ���service manager
    ProcessState::self()->startThreadPool();  //�����̳߳�
    IPCThreadState::self()->joinThreadPool(); //�����̼߳����̳߳�
    return 0;
}
