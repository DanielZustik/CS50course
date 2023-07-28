import fpdf


def main():
    name = input("What is ur name?")
    create_pdf(name)


def create_pdf(name):
    pdf = fpdf.FPDF()
    pdf.add_page()
    pdf.image("shirtificate.png", 0, 30)
    pdf.set_font("helvetica", "B", 16)
    pdf.cell(190,20, "CS50 Shirtificate", align='C',new_x="LMARGIN", new_y="NEXT")
    pdf.set_font("helvetica", "B", 12)
    pdf.cell(190,50, f"{name} took CS50", align='C')
    pdf.output("shirtificate.pdf")


if __name__ == "__main__":
    main()