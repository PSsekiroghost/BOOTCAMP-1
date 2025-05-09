import express from "express";
import connectNaDataBase from "./config/dbConnect.js";

const app = express();
app.use(express.json());

const livros = [
    {
        id: 1,
        titulo: "O senhor dos aneis"
    },
    {
        id: 2,
        titulo: "O Hobbit" 
    }
];

function buscarLivro (id){
    return livros.findIndex (livros =>{
        return livros.id === Number(id); 
    });
};

app.get ("/",(req, res) => {
    res.status(200).send("Curso back end.");
});

app.get ("/livros",(req, res) => {
    res.status(200).json(livros);
});

app.post("/livros",(req, res) => {
    livros.push(req.body);
    res.status(201).send("Livro cadastrado com sucesso!");
});

app.get("/livros/:id", (req, res) => {
    const index = buscarLivro(req.params.id);
    res.status(200).json(livros[index]);
});

app.put("/livros/:id", (req, res) => {
    const index = buscarLivro(req.params.id);

    livros[index].título = req.body.titulo;
    res.status(200).json(livros);
});

app.delete("/livros/:id", (req, res) => {
    const index = buscarLivro(req.params.id);
    livros.splice[index, 1];
    res.status(200).send("Livro Removido com Sucesso");
});

export default app;