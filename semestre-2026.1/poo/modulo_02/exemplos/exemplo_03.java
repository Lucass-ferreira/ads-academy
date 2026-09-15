public class Casa {
    String endereco;
    double area;

    public Casa( ) {
        this.area =0;
        this.endereco ="Nenhum";
    }

    public Casa(double a) {
        this.area = a;
        this.endereco ="Nenhum";
    }

    public Casa(String e)/{
        this.area =0;
        this.endereco = e;
    }

    public Casa(double a, String e) {
        this.area = a;
        this.endereco = e;
    }
}