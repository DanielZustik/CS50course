import fpdf


def main():
    name = input("What is ur name?")
    create_pdf(name)


def create_pdf(name):
    pdf = fpdf.FPDF()
    pdf.add_page()
    pdf.set_font("helvetica", "B", 16)
    pdf.cell(200,100, "CS50 Shirtificate", align='C',new_x="LMARGIN", new_y="NEXT")
    pdf.cell(200,100, f"{name} took CS50", align='C')
    pdf.output("shirtificate.pdf")


if __name__ == "__main__":
    main()