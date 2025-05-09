import mongoose from "mongoose";

async function connectNaDataBase(){
    mongoose.connect("mongodb+srv://admin:adimin123@cluster0.gmpqe.mongodb.net/livraria?retryWrites=true&w=majority&appName=Cluster0");
    return mongoose.connection;
};

export default connectNaDataBase;

