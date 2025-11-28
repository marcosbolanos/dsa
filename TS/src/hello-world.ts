export default function hello_world(message: string = 'hello world!') {
  console.log(message);
  return message;
}

export async function main() {
  let message = "Hello World!";
  hello_world(message);
}

if (import.meta.url === `file://${process.argv[1]}`) {
  main();
}
