#include <iostream>

using namespace std;

enum StatusPedido{
    Pendente,
    Processando,
    Enviado,
    Entregue,
    Cancelado
};
// valor default = Cancelado
void Status(StatusPedido status = Cancelado);

int main() {

    StatusPedido meuPedido = Pendente;

    Status(meuPedido);

    return 0;
}

void Status(StatusPedido status) {

    switch (status) {
        case Pendente:
            cout << "Seu pedido está pendente!" << endl;
            break;

        case Processando:
            cout << "Seu pedido está sendo processado!" << endl;
            break;

        case Enviado:
            cout << "Seu pedido foi enviado!" << endl;
            break;

        case Entregue:
            cout << "Seu pedido foi entregue!" << endl;
            break;

        case Cancelado:
            cout << "Seu pedido foi cancelado!" << endl;
            break;
    }
}