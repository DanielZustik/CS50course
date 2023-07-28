import fpdf


def main():
    name = input("What is ur name?")
    create_pdf(name)


def create_pdf(name):
    fpdf.Align("C")
    pdf = fpdf.FPDF()
    pdf.add_page()
    pdf.set_font("helvetica", "B", 16)
    pdf.cell(50,10, "CS50 Shirtificate")
    pdf.cell(50,20, "Daniel Zustik took CS50")
    pdf.output("shirtificate.pdf")


if __name__ == "__main__":
    main()